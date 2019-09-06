#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        int correspond_value = 0;
        int correspond_index = -1;
        int match_index = -1;
        vector<int> temp = nums;
        vector<int> answer_pair;
        //to use binary search need sort first
        sort(temp.begin(), temp.end());
        for(int i=0; i<temp.size() ; i++){
            correspond_value = target - temp[i];
            correspond_index = bin_search(temp, correspond_value);
            if(correspond_index != -1){
                match_index = i;
                break;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == temp[match_index] || nums[i] == correspond_value){
                answer_pair.push_back(i);
            }
        }
        return answer_pair;
    }
    
    int bin_search(vector<int>& nums, int target){
        int begin_index = 0;
        int end_index = nums.size() - 1;
        
        while(begin_index<=end_index){
            int compare_index = (begin_index + end_index)/2;
            
            if(target==nums[compare_index])
                return compare_index;
            else if(target>nums[compare_index])
                begin_index = compare_index + 1;
            else
                end_index = compare_index - 1;
        }
        return -1;
    }
};

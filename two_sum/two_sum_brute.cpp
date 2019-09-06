class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_size = size(nums);
        vector<int> target_indices;
        for(int augent_index=0; augent_index<nums_size-1; augent_index++){
            for(int addend_index=augent_index+1; addend_index<nums_size; addend_index++){
                if(nums[augent_index]+nums[addend_index]==target){
                    target_indices.push_back(augent_index);
                    target_indices.push_back(addend_index);
                    break;
                }
            }
        }
        return target_indices;
    }
};

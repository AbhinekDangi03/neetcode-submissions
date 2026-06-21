class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapper;
        for(int i = 0; i<nums.size(); i++){
            int current_number = nums[i];
            int x = target-current_number;
            if(mapper.find(x)!=mapper.end())
                {
                    return {mapper[x], i};
                }
            mapper[current_number]= i;
        }
        return {};
    }
};

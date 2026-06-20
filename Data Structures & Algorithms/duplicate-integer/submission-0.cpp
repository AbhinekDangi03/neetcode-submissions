class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mapper;
        for(int i : nums){
            mapper[i]++;
        }
        for(auto x: mapper){
            if(x.second > 1)    return true;
        }
        return false;
    }
};
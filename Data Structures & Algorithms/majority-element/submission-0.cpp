class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        unordered_map<int , int> mapper;
        for(int x: nums) mapper[x]++;

        for(auto const& x: mapper)
            {
                if(x.second >= n/2)
                    result = x.first; 
            }
        return result;
    }
};
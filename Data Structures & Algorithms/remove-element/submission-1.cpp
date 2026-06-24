class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last = nums.size()-1;
        int minusop = 0;
        int i =0;
        while(i<=last)
            {
                if(nums[i] == val)
                    {
                        int temp = nums[i];
                        nums[i] = nums[last];
                        nums[last] = temp;
                        minusop++;
                        last--;
                    }
                else{
                        i++;
                    }
            }
        int k = nums.size()-minusop;
        return k;
    }
};
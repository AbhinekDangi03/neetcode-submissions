class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //edge case: if there is no string in the strs or strs == empty.
        if (strs.empty()) return "";
        string longest = strs[0];
        for(int i=0; i<strs.size()-1; i++)
            {   string current_match = "";
                int n = min(strs[i].size(), strs[i+1].size());
                for(int j = 0; j<n; j++){
                    if(strs[i][j] == strs[i+1][j]){
                        current_match += strs[i][j];
                    }
                    else
                    {break;}
                }
                longest = current_match.size() < longest.size() ? current_match : longest;
                if(longest == "") return "";

            }
        return longest;
    }
};
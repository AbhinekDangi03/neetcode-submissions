class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //edge case
        if(strs.empty()) return {{""}};
        unordered_map<string, vector<string>> mapper;
        for(int i=0; i<strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            mapper[key].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto pair: mapper){
            result.push_back(pair.second);
        }
        return result;
       
    }
};

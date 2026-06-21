class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length() != t.length()) return false;
       unordered_map<char, int> mapperS, mapperT;
       for(char x : s)
       {
         mapperS[x]++;
       } 
       for(char x: t)
        {
            mapperT[x]++;
        }
       for(auto [key, val]: mapperS){
        if(mapperT[key] != val) return false;
       }
        return true;
    }
};

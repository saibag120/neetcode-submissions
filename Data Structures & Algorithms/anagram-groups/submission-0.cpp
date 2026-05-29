class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> x;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            x[key].push_back(s);
        }
        vector<vector<string>> y;
        for(auto it : x){
            y.push_back(it.second);
        }
        return y;
    }
};

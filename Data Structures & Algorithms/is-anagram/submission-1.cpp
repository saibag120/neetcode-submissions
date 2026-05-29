class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> x;
        unordered_map<char,int> y;

        for(int i=0;i<max(t.length(),s.length());i++){
           if(i<s.length()) x[s[i]]++;
           if(i<t.length()) y[t[i]]++;
        }
        if(x==y) return true;
        else return false;
    
    }
};

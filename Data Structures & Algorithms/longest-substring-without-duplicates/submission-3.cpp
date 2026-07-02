class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> x;
        int maxLen=0;
        int l=0;
        int r=0;
        for(int i=0;i<s.length();i++){
            if(!x.count(s[r])){
                x.insert(s[r]);
                maxLen=max(maxLen,r-l+1);
            }
            
            else{
                while(x.count(s[r])){
                    x.erase(s[l]);
                    l++;
                }
                x.insert(s[r]);
                maxLen=max(maxLen,r-l+1);
            }
            r++;
        }
        return maxLen;
    }
};

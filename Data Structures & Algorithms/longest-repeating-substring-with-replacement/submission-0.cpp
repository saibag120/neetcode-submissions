class Solution {
public:
    int characterReplacement(string s, int k) {
        int windowSize=0;
        int maxFreq=0;
        int result=0;
        int i=0;
        int j=0;
        unordered_map<char,int> ump;
        while(j<s.length()){
            ump[s[j]]++;
            for(auto it:ump){
                maxFreq=max(maxFreq,it.second);
            }
            windowSize=j-i+1;
            if(windowSize-maxFreq<=k){
                result=max(result,windowSize);
                j++;
            }
            else{
                ump[s[i]]--;
                i++;
                j++;
            }

        }
        return result;
    }
};

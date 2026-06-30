class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        string x="";
        int i=0;
        int j=i+1;
        int a=1;
        while(j<s.length() ){
            if(x.length()==0){
                x+=s[i];
                j=i+1;
            }
            if(!(x.find(s[j])!=string::npos && j<s.length())){
                x+=s[j];
                if(j-i+1>a){
                    a=j-i+1;
                }
                j++;
            }
            else if(x.find(s[j])!=string::npos){
                x.erase(0,1);
                i++;
            }
            if(i==j){
                j++;
            }

        }
        return a;
    }
};

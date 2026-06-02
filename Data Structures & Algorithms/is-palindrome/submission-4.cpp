class Solution {
public:
    bool isPalindrome(string s) {
        
        int i=0;
        int j=s.length()-1;
        while(i<j){
            int x=int(s[i]);
            int y=int(s[j]);
            while(!((s[i]>=48 && s[i]<=57) || (s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))){
                i++;
            }
            while(!((s[j]>=48 && s[j]<=57) || (s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122))){
                    j--;
                }
            if(i<j){
            if((char)tolower(s[i])!=(char)tolower(s[j])) return false;
            else{
                i++;
                j--;
            }
            }
        }
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        
        int i=0;
        int j=s.length()-1;
        while(i<j){
        
            while(!isalnum(s[i])){
                i++;
            }
            while(!isalnum(s[j])){
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

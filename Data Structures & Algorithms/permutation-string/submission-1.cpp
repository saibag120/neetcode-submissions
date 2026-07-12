class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        sort(s1.begin(),s1.end());
        int i=0;
        int j=0;
        while(j<s2.length()){
            if(j-i+1<n){
                j++;
            }
            else if(j-i+1==n){
                string x=s2.substr(i,n);
                sort(x.begin(),x.end());
                if(x==s1){
                    return true;
                }
                else{
                    i++;
                }
            }
        }
        return false;
    }
};

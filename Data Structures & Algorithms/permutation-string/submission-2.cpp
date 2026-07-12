class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i=0;
        int j=0;
        int count=s1.length();
        unordered_map<char,int> ump;
        for(int i=0;i<s1.length();i++){
            ump[s1[i]]++;
        }
        while(j<s2.length()){
            char ch=s2[j];
            if(ump[s2[j]]>0) count--;
            ump[s2[j]]--;
            if(j-i+1<s1.length()){
                j++;
            }
            else if(j-i+1==s1.length()){
                if(count!=0){
                    ump[s2[i]]++;
                    if(ump[s2[i]]>0) count++;
                    i++;
                    j++;
                }
                if(count==0){
                    return true;
                }
            }

        }
        return false;
    }
};

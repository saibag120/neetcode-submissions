class Solution {
public:

    string encode(vector<string>& strs) {
        string x="";
        for(auto it:strs){
            x+=it;
            x+="%%%";
            
        }
        return x;

    }

    vector<string> decode(string s) {
        vector<string> strs;
        int x=0;
        int y=0;
        while(x<s.length()){
            y=s.find("%%%",x);
            strs.push_back(s.substr(x,y-x));
            x=y+3;
            for(int i=0;i<3;i++){
                s[y]='^';
            }

        }
        return strs;

    }
};

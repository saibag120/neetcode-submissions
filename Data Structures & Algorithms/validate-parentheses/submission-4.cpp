class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        string open="({[";
        string close=")}]";
        for(int i=0;i<s.length();i++){
            if(open.find(s[i])!=string::npos) st.push(s[i]);
            if(close.find(s[i])!=string::npos){
                if(!st.empty() && open.find(st.top())==close.find(s[i])) st.pop();
                else return false;
            }
            
        }
        if(st.empty()) return true;
        else return false;
    }
};

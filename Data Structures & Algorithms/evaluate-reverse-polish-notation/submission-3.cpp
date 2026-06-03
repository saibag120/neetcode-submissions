class Solution {
public:
    stack <int> calc(stack <int> st,char x){
        int a=st.top();
        st.pop();
        int y=st.top();
        st.pop();
        if(x=='+'){
            st.push(y+a);
        }
        else if(x=='-'){
            st.push(y-a);
        }
        else if(x=='*'){
            st.push(y*a);
        }
        else if(x=='/'){
            st.push(y/a);
        }
        return st;
    }
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i][0]!='+' && tokens[i]!="-" && tokens[i][0]!='*' && tokens[i][0]!='/') st.push(stoi(tokens[i]));
            else{
               st= calc(st,tokens[i][0]);
            }
        }
        return st.top();
    }
};

class MinStack {
public:
    MinStack() {
        
    }
    stack<int> st;
    stack<int> minst;
    void push(int val) {
        if(minst.empty() || minst.top()>=val ) minst.push(val);
        st.push(val);
    }
    
    void pop() {
        if(st.top()==minst.top()) minst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};

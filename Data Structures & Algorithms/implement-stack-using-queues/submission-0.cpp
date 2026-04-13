class MyStack {
private:
    queue<int> st;
public:
    MyStack() {}
    
    void push(int x) {
        st.push(x);
        int size = st.size();
        for (int i = 0; i < size - 1; i++ )
        {
            st.push(st.front());
            st.pop();
        }
    }
    
    int pop() {
        int res = st.front();
        st.pop();
        return res;
    }
    
    int top() {
        return st.front();
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
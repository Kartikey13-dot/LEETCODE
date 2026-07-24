class MinStack {
    private:
    stack<int> st;
    stack<int> st2;
    
public:
  
    MinStack() {
        
    }
    
    void push(int value) {
      
        
        st.push(value);
        if (st2.empty() || value <= st2.top())
            st2.push(value);

    }
    
    void pop() {
         if (st.top() == st2.top())
            st2.pop();
            st.pop();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
       return st2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int val) {
        _stack.push(val);
        _ordered.insert(val);
    }
    
    void pop() {
        if (_stack.size()) {
            int val = _stack.top();
            auto it = _ordered.find(val);
            _stack.pop();
            _ordered.erase(it);
        }
    }
    
    int top() {
        return _stack.top();
    }
    
    int getMin() {
        return _stack.size() ? *_ordered.cbegin() : NULL;
    }
private:
    multiset<int> _ordered;
    stack<int> _stack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 
class MyQueue {
public:
    stack<int> stIn;
    stack<int> stOut;
    MyQueue() {

    }
    
    void push(int x) {
        stIn.push(x);
    }
    
    int pop() {
        if(stOut.empty()){
            while(!stIn.empty()){
                int tmp = stIn.top();
                stIn.pop();
                stOut.push(tmp);
            }
        }
        int tmp = stOut.top();
        stOut.pop();
        return tmp;
    }
    
    int peek() {
        int tmp = this->pop();
        stOut.push(tmp);
        return tmp;
    }
    
    bool empty() {
        return stIn.empty()&&stOut.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
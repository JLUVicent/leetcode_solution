class MyStack {
public:
    queue<int> que;
    MyStack() {

    }
    
    void push(int x) {
        que.push(x);

    }
    
    int pop() {
        // 获取队列的大小
        int size = que.size();
        size--;
        while(size--){//将队列的头元素循环添加到队列中，循环size-1次，同时弹出头元素。
            que.push(que.front());
            que.pop();
        }
        int result = que.front();//记录头元素
        que.pop();
        return result;

    }
    
    int top() {
        return que.back();

    }
    
    bool empty() {
        return que.empty();

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
class MyQueue {
public:
    stack<int> stIn;
    stack<int> stOut;
    MyQueue() {

    }
    // 添加元素到队列
    void push(int x) {
        stIn.push(x);

    }
    // 移除元素
    int pop() {
        // 只有当stOut为空的时候，从stIn里面导入全部数据
        if( stOut.empty()){
            while( !stIn.empty() ){
                // 从stIn导入数据直到stIn为空
                // 推入栈顶元素
                stOut.push(stIn.top());
                // 删除stIn中的元素
                stIn.pop();
            }
        }
        // 删除并返回stOut中的元素
        int result = stOut.top();
        stOut.pop();
        return result;
    }
    
    int peek() {
        // 使用 pop()函数
        int res = this->pop();
        stOut.push(res);//pop函数弹出了栈顶元素，再添加回去
        return res;

    }
    
    bool empty() {
        return stIn.empty() && stOut.empty();

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
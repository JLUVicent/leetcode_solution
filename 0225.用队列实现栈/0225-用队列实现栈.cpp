class MyStack {
public:
    queue<int> que;
    MyStack() {

    }
    
    void push(int x) {
        que.push(x);

    }
    
    int pop() {
        // ��ȡ���еĴ�С
        int size = que.size();
        size--;
        while(size--){//�����е�ͷԪ��ѭ����ӵ������У�ѭ��size-1�Σ�ͬʱ����ͷԪ�ء�
            que.push(que.front());
            que.pop();
        }
        int result = que.front();//��¼ͷԪ��
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
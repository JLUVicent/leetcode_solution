class MyQueue {
public:
    stack<int> stIn;
    stack<int> stOut;
    MyQueue() {

    }
    // ���Ԫ�ص�����
    void push(int x) {
        stIn.push(x);

    }
    // �Ƴ�Ԫ��
    int pop() {
        // ֻ�е�stOutΪ�յ�ʱ�򣬴�stIn���浼��ȫ������
        if( stOut.empty()){
            while( !stIn.empty() ){
                // ��stIn��������ֱ��stInΪ��
                // ����ջ��Ԫ��
                stOut.push(stIn.top());
                // ɾ��stIn�е�Ԫ��
                stIn.pop();
            }
        }
        // ɾ��������stOut�е�Ԫ��
        int result = stOut.top();
        stOut.pop();
        return result;
    }
    
    int peek() {
        // ʹ�� pop()����
        int res = this->pop();
        stOut.push(res);//pop����������ջ��Ԫ�أ�����ӻ�ȥ
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
class MyLinkedList {
public:
    //��������ڵ�ṹ��
    struct LinkedNode{
        int val;
        LinkedNode* next;
        LinkedNode(int val): val(val), next(nullptr){}
    };
    // ��ʼ������
    MyLinkedList() {
        dummyHead = new LinkedNode(0);//��������ͷ�ڵ�
        size = 0;

    }
    // ��ȡ�����е�index�ڵ��ֵ
    int get(int index) {
        if( index > (size - 1) || index < 0){
            return -1;
        }

        LinkedNode* cur = dummyHead->next;
        while( index-- ){
            cur = cur->next;
        }
        return cur->val;

    }
    // ������ĵ�һ��Ԫ��֮ǰ���ֵval
    void addAtHead(int val) {
        LinkedNode* newnode = new LinkedNode(val);
        newnode->next = dummyHead->next;
        dummyHead->next = newnode;
        size++;

    }
    //������Ľ�β׷��һ��ֵΪval�Ľڵ�
    void addAtTail(int val) {
        LinkedNode* newnode = new LinkedNode(val);
        // newnode->val = val;
        LinkedNode* cur = dummyHead;
        while( cur->next != nullptr){
            cur = cur->next;
        }
        cur->next = newnode;
        size++;
    }
    //�������еĵ�indexλ�����ֵΪval�Ľڵ�
    // 1.���index>size ���ؿ�
    // 2.���index=size ��β������ڵ�
    // 3.���index<0 ��ͷ������ڵ�
    // 4.ʣ��������м����ڵ�
    void addAtIndex(int index, int val) {
        if( index > size ) return;
        if( index < 0 ) index = 0;
        LinkedNode* newnode = new LinkedNode(val);
        LinkedNode* cur = dummyHead;
        while( index-- ){
            cur = cur -> next;
        }
        newnode->next = cur->next;
        cur->next = newnode;
        size++;

    }
    //ɾ����index���ڵ�
    void deleteAtIndex(int index) {
        if( index >= size || index < 0){
            return;
        }
        LinkedNode* cur = dummyHead;
        while ( index-- ){
            cur = cur->next;
        }
        LinkedNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        size--;
    }
    // ��ӡ����
    void printLinkedList(){
        LinkedNode* cur = dummyHead;
        while(cur->next != nullptr){
            cout << cur->next->val<<" ";
            cur = cur->next;
        }
        cout<<endl;
    }
    private:
        int size;
        LinkedNode* dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
class MyLinkedList {
public:
    //定义链表节点结构体
    struct LinkedNode{
        int val;
        LinkedNode* next;
        LinkedNode(int val): val(val), next(nullptr){}
    };
    // 初始化链表
    MyLinkedList() {
        dummyHead = new LinkedNode(0);//定义虚拟头节点
        size = 0;

    }
    // 获取链表中第index节点的值
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
    // 在链表的第一个元素之前添加值val
    void addAtHead(int val) {
        LinkedNode* newnode = new LinkedNode(val);
        newnode->next = dummyHead->next;
        dummyHead->next = newnode;
        size++;

    }
    //在链表的结尾追加一个值为val的节点
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
    //在链表中的第index位置添加值为val的节点
    // 1.如果index>size 返回空
    // 2.如果index=size 在尾部插入节点
    // 3.如果index<0 在头部插入节点
    // 4.剩下情况在中间插入节点
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
    //删除第index个节点
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
    // 打印链表
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
class MyLinkedList {


public:

    struct ListNode{
        int val;
        ListNode* next;
        ListNode(int x): val(x),next(NULL){}
    };
    //初始化链表
    MyLinkedList() {
        dummyhead = new ListNode(0);
        size = 0;
    }
    
    int get(int index) {
        if( index > (size - 1) || index < 0){
            return -1;
        }
        ListNode* cur = dummyhead->next;
        while( index-- ){
            cur = cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        ListNode* node = new ListNode(val);
        node->next = dummyhead->next;   //node的下一个指向头节点
        dummyhead->next = node;
        size++; //链表的尺寸加一
    }
    
    void addAtTail(int val) {
        ListNode* node = new ListNode(val);
        ListNode* cur = dummyhead;
        while( cur->next != nullptr ){
            cur = cur->next;
        }
        cur->next = node;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if( index > size ) return;
        if( index < 0) index = 0;
        ListNode* node = new ListNode(val);
        ListNode* cur = dummyhead;
        while( index-- ){
            cur = cur->next;
        }
        node->next = cur->next;
        cur->next = node;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if( index >= size || index < 0) return;

        ListNode* cur = dummyhead;
        while( index-- ){
            cur = cur->next;
        }
        ListNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        size--;
    }
    private:
        int size;
        ListNode* dummyhead;
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
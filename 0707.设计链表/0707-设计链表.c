

typedef struct MylinkedList{
    int val;
    struct MyLinkedList* next;
}MyLinkedList;

MyLinkedList* myLinkedListCreate() {
    // MylinkedList* head = (MylinkedList *)malloc(sizeof (MylinkedList));
    MyLinkedList* head = (MyLinkedList *)malloc(sizeof (MyLinkedList));
    head->next = NULL;
    return head;

}

int myLinkedListGet(MyLinkedList* obj, int index) {
    // myLinkedList *cur = obj->next;
    MyLinkedList *cur = obj->next;

    for( int i = 0; cur != NULL; i++){
        if( i == index){
            return cur->val;
        }else{
            cur = cur->next;
        }
    }
    return -1;

}
//obj为虚拟头结点
void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* nhead = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    nhead->val = val;
    nhead->next = obj->next;
    obj->next = nhead;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* ntail = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    ntail->val = val;
    MyLinkedList* cur = obj;
    while( cur->next != NULL){
        cur = cur->next;
    }
    cur->next = ntail;
    ntail->next = NULL;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    if( index == 0){
        myLinkedListAddAtHead(obj,val);
        return;
    }
    MyLinkedList *cur = obj->next;
    for( int i  = 1; cur != NULL; i++){
        if( i == index){
            MyLinkedList* newnode = (MyLinkedList *)malloc(sizeof (MyLinkedList));
            newnode->val = val;
            newnode->next = cur->next;
            cur->next = newnode;
            return;
        }else{
            cur = cur->next;
        }
    }

}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    if( index == 0){
        MyLinkedList* tmp = obj->next;
        if( tmp != NULL){
            obj->next = tmp->next;
            free(tmp);
        }
        return;
    }
    MyLinkedList* cur = obj->next;
    for( int i = 1; cur != NULL && cur->next != NULL; i++){
        if( i == index){
            MyLinkedList* tmp = cur->next;
            if( tmp != NULL){
                cur->next = tmp->next;
                free(tmp);
            }
            return;
        }
        else{
            cur = cur->next;
        }
    }


}

void myLinkedListFree(MyLinkedList* obj) {
    while(obj != NULL){
        MyLinkedList* tmp = obj;
        obj = obj->next;
        free(tmp);
    }
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/

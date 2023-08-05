


struct MyLinkedList{
    int val;
    MyLinkedList *next;
    MyLinkedList *prev;
    
    
    MyLinkedList(int val=0, MyLinkedList *next = nullptr, MyLinkedList *prev = nullptr) : val(val), next(next), prev(prev) {}
    
} ;


MyLinkedList* myLinkedListCreate() {
    MyLinkedList* obj= new MyLinkedList();
    return obj;
    
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    if (index<0) return -1;
    int CurrentIndex=0;
    while (CurrentIndex != index){
        obj = obj->next;
        CurrentIndex++;
        if (obj->next==nullptr) return -1;
    }
    return obj->val;
  
}   

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* head=myLinkedListCreate();
    head->val=val;
    head->next=obj;
    obj=head;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* tail=myLinkedListCreate();
    tail->val=val;
    while (obj->next != nullptr){
        obj=obj->next;
    }
    obj->next=tail;  
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    int CurrentIndex=0;
    while (CurrentIndex != index){
        obj = obj->next;
        CurrentIndex++;
    }
    MyLinkedList* node=myLinkedListCreate();
    node->val=val;
    node->next=obj->next;
    obj=node; 
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    int CurrentIndex=0;

    if (index == 0){
        MyLinkedList* temp=obj;
        obj=obj->next;
        delete temp;
    }

    while (CurrentIndex < index){
        obj = obj->next;
        CurrentIndex++;
    }
    if (obj->next->next==nullptr) {
        MyLinkedList* temp=obj->next;
        obj->next=nullptr;
        delete temp;
    }

    MyLinkedList* temp=obj->next;
    obj->next=obj->next->next;
    delete temp;
  
}

#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

struct MyLinkedList{
    int val;
    struct MyLinkedList *next;
};

struct MyLinkedList* myLinkedListCreate();
int myLinkedListGet(struct MyLinkedList* obj, int index);
void myLinkedListAddAtHead(struct MyLinkedList* obj, int val);
void myLinkedListAddAtTail(struct MyLinkedList* obj, int val);
void myLinkedListAddAtIndex(struct MyLinkedList* obj, int index, int val);
void myLinkedListDeleteAtIndex(struct MyLinkedList* obj, int index);

#endif
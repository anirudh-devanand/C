#include <stdio.h>
#include "MyLinkedList.h"


struct MyLinkedList* myLinkedListCreate() {
    struct MyLinkedList* obj = (struct MyLinkedList*)malloc(sizeof(struct MyLinkedList));
    if (obj != NULL) {
        obj->val = 0;
        obj->next = NULL;
    }
    return obj;
}

//O(n) time
int myLinkedListGet(struct MyLinkedList* obj, int index) {
    if (index < 0) return -1;
    int CurrentIndex = 0;
    while (CurrentIndex != index) {
        obj = obj->next;
        CurrentIndex++;
        if (obj->next == NULL) return -1;
    }
    return obj->val;
}

//O(1) time
void myLinkedListAddAtHead(struct MyLinkedList* obj, int val) {
    struct MyLinkedList* head = myLinkedListCreate();
    head->val = val;
    head->next = obj;
    obj = head;
}


//O(n) time
void myLinkedListAddAtTail(struct MyLinkedList* obj, int val) {
    struct MyLinkedList* tail = myLinkedListCreate();
    tail->val = val;
    while (obj->next != NULL) {
        obj = obj->next;
    }
    obj->next = tail;
}

//O(n) time
void myLinkedListAddAtIndex(struct MyLinkedList* obj, int index, int val) {
    int CurrentIndex = 0;
    while (CurrentIndex != index) {
        obj = obj->next;
        CurrentIndex++;
    }
    struct MyLinkedList* node = myLinkedListCreate();
    node->val = val;
    node->next = obj->next;
    obj->next = node;
}

//O(n) time
void myLinkedListDeleteAtIndex(struct MyLinkedList* obj, int index) {
    int CurrentIndex = 0;

    if (index == 0) {
        struct MyLinkedList* temp = obj;
        obj = obj->next;
        free(temp);
    }

    while (CurrentIndex < index) {
        obj = obj->next;
        CurrentIndex++;
    }
    if (obj->next->next == NULL) {
        struct MyLinkedList* temp = obj->next;
        obj->next = NULL;
        free(temp);
    }

    struct MyLinkedList* temp = obj->next;
    obj->next = obj->next->next;
    free(temp);
}
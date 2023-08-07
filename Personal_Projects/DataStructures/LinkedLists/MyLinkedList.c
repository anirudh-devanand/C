#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


struct MyLinkedList{
    int val;
    struct MyLinkedList *next;
    struct MyLinkedList *prev;
};

struct MyLinkedList* myLinkedListCreate() {
    struct MyLinkedList* obj = (struct MyLinkedList*)malloc(sizeof(struct MyLinkedList));
    if (obj != NULL) {
        obj->val = 0;
        obj->next = NULL;
        obj->prev = NULL;
    }
    return obj;
}

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

void myLinkedListAddAtHead(struct MyLinkedList* obj, int val) {
    struct MyLinkedList* head = myLinkedListCreate();
    head->val = val;
    head->next = obj;
    obj = head;
}

void myLinkedListAddAtTail(struct MyLinkedList* obj, int val) {
    struct MyLinkedList* tail = myLinkedListCreate();
    tail->val = val;
    while (obj->next != NULL) {
        obj = obj->next;
    }
    obj->next = tail;
}

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


bool hasCycle(struct MyLinkedList *head) {
    int counter = 0;
    struct MyLinkedList* run1 = head;
    struct MyLinkedList* run2 = head;
    while (1) {
        if(run1 == NULL || run1->next == NULL || run1->next->next == NULL)
            return false;
        run1 = run1->next->next;
        run2 = run2->next;
        if (run1 == run2)
            return true;
        counter++;
    }
    return false;
}

bool hasCycle(struct MyLinkedList *head) {
    struct MyLinkedList* run1 = head;
    struct MyLinkedList* run2 = head;
    while (1) {
        if(run1 == NULL || run1->next == NULL)
            return false;
        run1 = run1->next->next;
        run2 = run2->next;
        if (run1 == run2)
            return true;
    }
    return false;
}

struct MyLinkedList *detectCycle(struct MyLinkedList *head) {
    struct MyLinkedList* run1 = head;
    struct MyLinkedList* run2 = head;
    while (1) {
        int flag=1;
        if(run1 == NULL || run1->next == NULL)
            return NULL;
        if(flag==1) run1 = run1->next->next;
        else if (run1==run2) return run1;
        else run1 = run1->next;
        run2 = run2->next;
        if (run1 == run2 && flag>0){
            run1 = head;
            flag--;
        }
        else if (run1==run2) return run1;
    }
}


struct MyLinkedList *getIntersectionNode(struct MyLinkedList *headA, struct MyLinkedList *headB) {
    struct MyLinkedList *tempA = headA;
    int count = 0;
    while (tempA != NULL) {
        tempA = tempA->next;
        count++;
    }
    struct MyLinkedList *tempB = headB;
    while (tempB != NULL) {
        tempB = tempB->next;
        count--;
    }
    
    if (tempA != tempB) return NULL;
    
    struct MyLinkedList *run1 = headA;
    struct MyLinkedList *run2 = headB;
    
    if (count > 0) {
        run1 = headA;
        run2 = headB;
    } else if (count <= 0) {
        run1 = headB;
        run2 = headA;
    }
    
    count = abs(count);

    for (int i = 0; i < count; i++) {
        run1 = run1->next;
    }

    while (1) {
        if (run1 == run2) return run1;
        run1 = run1->next;
        run2 = run2->next;
    }
}

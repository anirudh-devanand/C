#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "MyLinkedList.h"



//O(m+n) time
bool hasCycle(struct MyLinkedList *head) {
    struct MyLinkedList* run1 = head;
    struct MyLinkedList* run2 = head;
    while (1) {
        if(run1 == NULL || run1->next == NULL || run1->next->next == NULL)
            return false;
        run1 = run1->next->next;
        run2 = run2->next;
        if (run1 == run2)
            return true;
    }
    return false;
}

//O(m+n) time
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

//O(max(m,n)) time
struct MyLinkedList *getIntersectionNode(struct MyLinkedList *headA, struct MyLinkedList *headB) {
    struct MyLinkedList *tempA = headA;
    struct MyLinkedList *tempB = headB;
    while(tempA != tempB) {
        tempA = tempA->next;
        tempB = tempB->next;
        if(tempA == NULL && tempB != NULL) tempA = headB;
        if(tempB == NULL && tempA != NULL) tempB = headA;
    }
    return tempA;   
}

//O(max(m,n)) time
struct MyLinkedList* removeNthFromEnd(struct MyLinkedList* head, int n){
    struct MyLinkedList *tempA = head;
    struct MyLinkedList *temp = head;
    
    while(n>0){
        tempA=tempA->next;
        n--;
    }
    
    if(tempA){
        while(tempA->next){
            head=head->next;
            tempA=tempA->next;
        }
        head->next=head->next->next;
        head=temp;
    }
    else head=head->next;
 
    return head;
}

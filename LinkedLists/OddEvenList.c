#include "MyLinkedList.h"
#include <stdio.h>


//O(n) time
struct MyLinkedList* oddEvenList(struct MyLinkedList* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    struct MyLinkedList *odd = head;
    struct MyLinkedList *even = head->next;
    struct MyLinkedList *evenHead = even;
    
    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    
    odd->next = evenHead;
    
    return head;
}

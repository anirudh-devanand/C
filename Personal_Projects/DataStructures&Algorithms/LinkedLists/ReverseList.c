#include "MyLinkedList.h"
#include <stdio.h>

struct MyLinkedList *reverseList(struct MyLinkedList *head) {
    struct MyLinkedList *prev = NULL;
    struct MyLinkedList *current = head;

    while (current != NULL) {
        struct MyLinkedList *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}
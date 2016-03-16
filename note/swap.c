#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "swap.h"

List *swap(List *head, List *a, List *b)
{
    List *curr = head;
    List *prevA = NULL;
    List *prevB = NULL;
    while (curr != a) {
        prevA = curr;
        curr = curr->next;
    }
    curr = head;
    while (curr != b) {
        prevB = curr;
        curr = curr->next;
    }
    curr = head;
    if(curr==a) {
        prevB->next = a;
        List *tmp = a->next;
        a->next = b->next;
        b->next = tmp;
        head=b;
        printf("head change to b \n");
    } else if(curr==b) {
        prevA->next = b;
        List *tmp = a->next;
        a->next = b->next;
        b->next = tmp;
        head=a;
        printf("head change a \n");
    } else if(prevA && prevB) {
        prevA->next = b;
        prevB->next = a;
        List *tmp = a->next;
        a->next = b->next;
        b->next = tmp;
    }
    return head;

}


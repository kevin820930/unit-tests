#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "swap.h"

void swap(entry **head, entry *a, entry *b)
{
    printf("fuck: %s \n",(*head)->lastName);
    entry *curr = *head;
    entry *prevA = NULL;
    entry *prevB = NULL;   
    while (curr != a) {
        prevA = curr;
        curr = curr->Next;
    }
    curr = *head;
    while (curr != b) {
        prevB = curr;
        curr = curr->Next;
    }
    curr = *head;
    if(curr==a){
    prevB->Next = a;
    entry *tmp = a->Next;
    a->Next = b->Next;
    b->Next = tmp;
    *head=b;
    printf("head change to b \n");
    }
    else if(curr==b){
    prevA->Next = b;
    entry *tmp = a->Next;
    a->Next = b->Next;
    b->Next = tmp;
    *head=a;
    printf("head change a \n");
    }
    else if(prevA && prevB) {
        prevA->Next = b;
        prevB->Next = a;
        entry *tmp = a->Next;
        a->Next = b->Next;
        b->Next = tmp;
    } 

}
//apppend OK
entry *append(char lastName[], entry *e)
{
    e->Next = (entry *) malloc(sizeof(entry));
    e = e->Next;
    strcpy(e->lastName, lastName);
    e->Next = NULL;

    return e;
}


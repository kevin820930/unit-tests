#ifndef _SWAP_H
#define _SWAP_H

#define MAX_LAST_NAME_SIZE 16
//test
/* TODO: After modifying the original version, uncomment the following
 * line to set OPT properly */
//#define OPT 1
//#undef OPT2
typedef struct List_node {
    int howlong;
    struct List_node *rightson;
    struct List_node *leftson;
    struct List_node *next;
    int value;
} List;

List *swap(List *head, List *a, List *b);
void bubble_sort(List **head);
#endif


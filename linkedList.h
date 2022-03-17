#ifndef _LINKEDLIST_
#define _LINKEDLIST_

#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node * next;
} ll_node;

ll_node * createLinkedList(int data);

ll_node * createNode(int data);

int appendToLinkedList(ll_node * head,int data);

void dislayLinkedList(ll_node * head);

int addNodeToPosition(ll_node * head, int position, int data);

int deleteNodeFromPosition(ll_node * head, int position);

int linkedListLength(ll_node * head);

int updateNode(ll_node * head, int position, int data);

ll_node * freeAllNodes(ll_node * head);

#endif

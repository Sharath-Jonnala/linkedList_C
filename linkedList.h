#ifndef _LINKEDLIST_
#define _LINKEDLIST_

#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node * next;
} ll_node;

/**
 * @brief Create a Linked List object
 * 
 * @param data 
 * @return ll_node* 
 */
ll_node * createLinkedList(int data);

/**
 * @brief Create a Node object
 * 
 * @param data 
 * @return ll_node* 
 */
ll_node * createNode(int data);

/**
 * @brief append a new node to end of the linked list
 * 
 * @param head 
 * @param data 
 * @return int 
 */
int appendToLinkedList(ll_node * head,int data);

/**
 * @brief display all nodes
 * 
 * @param head 
 */
void dislayLinkedList(ll_node * head);

/**
 * @brief add a node in desired position
 * 
 * @param head 
 * @param position 
 * @param data 
 * @return int 
 */
int addNodeToPosition(ll_node * head, int position, int data);

/**
 * @brief delete a node from desired position
 * 
 * @param head 
 * @param position 
 * @return int 
 */
int deleteNodeFromPosition(ll_node * head, int position);

/**
 * @brief returns length of linked list
 * 
 * @param head 
 * @return int 
 */
int linkedListLength(ll_node * head);

/**
 * @brief update a node value from desired position
 * 
 * @param head 
 * @param position 
 * @param data 
 * @return int 
 */
int updateNodeInPosition(ll_node * head, int position, int data);

ll_node * freeAllNodes(ll_node * head);

#endif

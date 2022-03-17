//#include <iostream.h>
#include <stdio.h>
#include "linkedList.h"

ll_node * createLinkedList(int data)
{
    return createNode(data);
}

ll_node * createNode(int data)
{
    ll_node * newNode = (ll_node *) malloc(sizeof(ll_node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

int appendToLinkedList(ll_node* head, int data)
{
    if(head == NULL)
    {
        printf("Head NULL pointer\n");
        return -1;
    }
    ll_node * appendNode = createNode(data);
    ll_node * temp = head;
    
    int position = 2;

    while(temp->next != NULL)
    {
        position++;
        temp = temp->next;
    }
    temp->next = appendNode;
    return position;
}

void dislayLinkedList(ll_node * head)
{
    if(head == NULL)
    {
        printf("No nodes to display\n");
        return;
    }

    ll_node * temp = head;
    
    int position = 1;

    while(temp->next != NULL)
    {
        printf(" %d ---", temp->data);
        position++;
        temp = temp->next;
    }
        printf(" %d \n", temp->data);

}

int addNodeToPosition(ll_node * head, int position, int data)
{
    if(head == NULL)
    {
        printf("Head NULL pointer\n");
        return -1;
    }
    ll_node * temp = head;
    for(int i = 1; i < position - 1; i++)
    {
        if(temp->next == NULL)
        {
            printf("Position out of index");
            return -1;
        }
        temp = temp->next;
    }

    ll_node * newNode = createNode(data);

    newNode->next = temp->next;
    temp->next = newNode;

    return position;
}

int deleteNodeFromPosition(ll_node * head, int position)
{
    if(head == NULL)
    {
        printf("Head NULL pointer\n");
        return -1;
    }
    ll_node * temp = head;
    for(int i = 1; i < position - 1; i++)
    {
        if(temp->next == NULL)
        {
            printf("Position out of index");
            return -1;
        }
        temp = temp->next;
    }

    ll_node * deleteNode = temp->next;

    temp->next = deleteNode->next;

    free(deleteNode);

    return position;
}

int linkedListLength(ll_node * head)
{
    if(head == NULL)
    {
        printf("Head NULL pointer\n");
        return -1;
    }
    ll_node * temp = head;
    int length = 0;

    while(temp->next != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

int updateNode(ll_node * head, int position, int data)
{
    if(head == NULL)
    {
        printf("Head NULL pointer\n");
        return -1;
    }
    ll_node * temp = head;
    for(int i = 1; i <= position - 1; i++)
    {
        if(temp->next == NULL)
        {
            printf("Position out of index");
            return -1;
        }
        temp = temp->next;
    }

    temp->data = data;

    return position;
}

ll_node * freeAllNodes(ll_node * head)
{
    if(head == NULL)
    {
        printf("Head NULL pointer\n");
        return NULL;
    }

    ll_node * temp1 = head->next;
    ll_node * temp2;

    if(head != NULL)
    {
        free(head);
        head = NULL;
    }

    while(temp1->next != NULL)
    {
        temp2 = temp1->next;
        free(temp1);
        temp1 = temp2;
    } 

    return head;
}
#include <stdio.h>
#include "linkedList.h"

int main() {

printf("Linked List Test\n");

ll_node * head = createLinkedList(1);

appendToLinkedList(head, 2);
appendToLinkedList(head, 3);
appendToLinkedList(head, 4);
appendToLinkedList(head, 5);

addNodeToPosition(head, 3, 80);
dislayLinkedList(head);
printf("%d\n",linkedListLength(head));

updateNode(head, 3, 69);
dislayLinkedList(head);
printf("%d\n",linkedListLength(head));

deleteNodeFromPosition(head, 3);
dislayLinkedList(head);
printf("%d\n",linkedListLength(head));

printf("Freeing all nodes...\n");
head = freeAllNodes(head);
dislayLinkedList(head);
linkedListLength(head);

return 0;
}

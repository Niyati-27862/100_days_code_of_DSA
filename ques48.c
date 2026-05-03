Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}
struct Node* removeElements(struct Node* head, int val) {
    while (head != NULL && head->data == val) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    struct Node* curr = head;

    while (curr != NULL && curr->next != NULL) {
        if (curr->next->data == val) {
            struct Node* temp = curr->next;
            curr->next = temp->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }

    return head;
}
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    int n, x, val;
    struct Node* head = NULL;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        head = insert(head, x);
    }
    
    scanf("%d", &val);

    head = removeElements(head, val);

    printList(head);

    return 0;
}
//Given the head of a singly linked list, return the middle node of the linked list.if there are two middle nodes, return the second middle node.
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

// Create new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Append node to list
struct ListNode* append(struct ListNode* head, int val) {
    struct ListNode* newNode = createNode(val);

    if (head == NULL)
        return newNode;

    struct ListNode* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Find middle node
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// Print list from given node
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    struct ListNode* head = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        head = append(head, x);
    }

    struct ListNode* mid = middleNode(head);

    printList(mid);

    return 0;
}
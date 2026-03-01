#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list node
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function to rotate a linked list to the right by k places
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

    // 1. Find the length of the list and the tail node
    int length = 1;
    struct ListNode* tail = head;
    while (tail->next) {
        tail = tail->next;
        length++;
    }

    // 2. Compute effective rotations
    k = k % length;
    if (k == 0) return head;

    // 3. Make the linked list circular
    tail->next = head;

    // 4. Find the new tail which is at position (length - k)
    int stepsToNewTail = length - k;
    struct ListNode* newTail = head;
    for (int i = 1; i < stepsToNewTail; i++) {
        newTail = newTail->next;
    }

    // 5. The new head is the next node after the new tail
    struct ListNode* newHead = newTail->next;
    
    // 6. Break the loop to return to a singly-linked list
    newTail->next = NULL;

    return newHead;
}

// Utility function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Utility function to print the linked list
void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating a test linked list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    struct ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original list: ");
    printList(head);

    int k = 2; // Number of places to rotate
    printf("Rotating right by %d places...\n", k);
    
    head = rotateRight(head, k);

    printf("List after rotation: ");
    printList(head);

    // Free the dynamically allocated memory
    struct ListNode* current = head;
    struct ListNode* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;
}

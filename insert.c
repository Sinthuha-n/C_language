#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Add at beginning
void addAtBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

int main() {
    // Adding some nodes first
    addAtBeginning(10);
    addAtBeginning(20);
    addAtBeginning(30);

    // Traverse and print the list
    struct Node* temp = head; // use a temporary pointer
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}

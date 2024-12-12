#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

// Function prototypes
void insert_at_beginning(struct Node **head, int data);
void insert_at_end(struct Node *head, int data); // Single pointer
void insert_at_position(struct Node *head, int position, int data); // Single pointer
void display_list(struct Node *head);
int get_length(struct Node *head);

int main() {
    struct Node *head = NULL;
    int choice, data, position;

    while (1) {
        printf("\nLinked List Operations:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at beginning: ");
                scanf("%d", &data);
                insert_at_beginning(&head, data); // Double pointer required
                break;
            case 2:
                printf("Enter data to insert at end: ");
                scanf("%d", &data);
                insert_at_end(head, data); // Single pointer
                break;
            case 3:
                printf("Enter position to insert at: ");
                scanf("%d", &position);
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insert_at_position(head, position, data); // Single pointer
                break;
            case 4:
                display_list(head);
                break;
            case 5:
                // Free memory
                struct Node *current = head;
                while (current != NULL) {
                    struct Node *temp = current;
                    current = current->link;
                    free(temp);
                }
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to insert a node at the beginning (requires double pointer)
void insert_at_beginning(struct Node **head, int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    new_node->data = data;
    new_node->link = *head;
    *head = new_node;
}

// Function to insert a node at the end (uses single pointer)
void insert_at_end(struct Node *head, int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    new_node->data = data;
    new_node->link = NULL;

    if (head == NULL) {
        // If the list is empty, update the head in the main function
        printf("List is empty. Cannot insert at end without double pointer.\n");
        return;
    }

    struct Node *current = head;
    while (current->link != NULL) {
        current = current->link;
    }
    current->link = new_node;
}

// Function to insert a node at a specific position (uses single pointer)
void insert_at_position(struct Node *head, int position, int data) {
    if (position < 0) {
        printf("Position cannot be negative.\n");
        return;
    }

    int length = get_length(head);

    if (position > length) {
        printf("Position out of range. Inserting at end.\n");
        insert_at_end(head, data);
        return;
    }

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    new_node->data = data;

    if (position == 0) {
        // If inserting at the beginning, update the head in the main function
        printf("Cannot insert at position 0 without double pointer.\n");
        return;
    }

    struct Node *current = head;
    for (int i = 0; i < position - 1; i++) {
        current = current->link;
    }
    new_node->link = current->link;
    current->link = new_node;
}

// Function to display the list
void display_list(struct Node *head) {
    printf("\nPrinting Linked List:\n");
    struct Node *current = head;
    while (current != NULL) {
        printf("Node Data: %d, Next Address: %p\n", current->data, (void *)current->link);
        current = current->link;
    }
}

// Function to get the length of the list
int get_length(struct Node *head) {
    int count = 0;
    struct Node *current = head;
    while (current != NULL) {
        count++;
        current = current->link;
    }
    return count;
}
#include <stdio.h>
#include <stdlib.h>  
#include "header.h"  

int main() {
    Queue *queue = initialise_queue(); 
    int choice, data;
    Node *front;

    while (1) {
        // Display the menu
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek (View Front)\n");
        printf("4. Display Queue\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Enqueue operation
                printf("Enter the data to enqueue: ");
                scanf("%d", &data);
                enqueue(data, queue);
                printf("%d enqueued into the queue.\n", data);
                break;

            case 2:
                // Dequeue operation
                dequeue(queue);
                printf("Front element dequeued from the queue.\n");
                break;

            case 3:
                // Peek operation (view the front element)
                front = peek(queue);
                if (front != NULL) {
                    printf("Front element is: %d\n", front->data);
                } else {
                    printf("Queue is empty!\n");
                }
                break;

            case 4:
                // Display the queue contents
                printf("Current Queue: ");
                if (queue->front == NULL) {
                    printf("Queue is empty.\n");
                } else {
                    Node *temp_queue = queue->front;
                    while (temp_queue != NULL) {
                        printf("%d ", temp_queue->data);
                        temp_queue = temp_queue->next;
                    }
                    printf("\n");
                }
                break;

            case 5:
                // Exit the program
                printf("Exiting...\n");
                exit(0);  // Terminate the program

            default:
                // Invalid choice
                printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}

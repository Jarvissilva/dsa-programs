#include <stdio.h>
#include <stdlib.h>
#include "header.h"

Queue *initialise_queue()
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;

    return queue;
}

void enqueue(int data, Queue *queue)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (queue->front == NULL)
    {
        queue->front = newNode;
        queue->rear = newNode;
    }
    else
    {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

void dequeue(Queue *queue)
{
    if (queue->front != NULL)
    {
        Node *temp = queue->front;

        queue->front = temp->next;

          if (queue->front == NULL) {
            queue->rear = NULL;
        }
        free(temp);
    }
    else{
        printf("Queue is empty");
    }
    
}

Node *peek(Queue *queue){
    return queue->front;
}
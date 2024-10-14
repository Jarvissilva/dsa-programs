typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Queue {
    struct Node *front;
    struct Node *rear;
} Queue;


Queue* initialise_queue();
void enqueue(int data,Queue *queue);
void dequeue(Queue *queue);
Node *peek(Queue *queue);
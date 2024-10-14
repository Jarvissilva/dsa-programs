typedef struct Node
{
    int data;
    struct Node *previous;
} Node;

typedef struct Stack
{
    struct Node *top;
} Stack;

Stack *initialise_stack();

void push(int data, Stack *stack);
void pop(Stack *stack);
void peek(Stack *stack);
int isEmpty(Stack *stack);

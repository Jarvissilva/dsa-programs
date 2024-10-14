#include <stdio.h>
#include <stdlib.h>
#include "header.h"

Stack *initialise_stack(){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void push(int data, Stack *stack)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->previous = stack->top; 
    stack->top=newNode;
}

void pop(Stack *stack)
{
  int check_empty = isEmpty(stack);
  if (check_empty == 0)
  {
    Node *temp = stack->top;

    stack->top = stack->top->previous;

    printf("Popped %d from the stack\n",temp->data);

    free(temp);
  }
  else{
    printf("Stack is empty cannot pop\n");
  }
  
}

void peek(Stack *stack)
{
    printf("%d\n",stack->top->data);   
}

int isEmpty(Stack *stack){
    if (stack->top == NULL)
    {
        printf("Stack is empty\n");
        return 1;
    }
    else{
        return 0;
    }
    
}
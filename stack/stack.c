#include <stdio.h>
#include "header.h"

#define size 5

int stack[size];
int top = -1;

void push()
{
    if (top < size)
    {   
        int val;
        printf("Enter a number to store in stack: ");
        scanf("%d",&val);
        top = top + 1;
        stack[top] = val;
        printf("Added to stack\n");
    }
    else
    {
        printf("Stack is full\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Poped %d from to stack\n", stack[top]);
        stack[top] = 0;
        top = top - 1;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top: %d\n", stack[top]);
    }
}
void isFull(){
    if(top < size){
        printf("Stack size is not full\n");       
    }
    else{
        printf("Stack is full\n");
    }
}

void isEmpty(){
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else{
        printf("Stack is not empty\n");
    }
}
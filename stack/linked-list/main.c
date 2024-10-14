#include <stdio.h>
#include "header.h"

int main()
{
  
  Stack *stack = initialise_stack();

  int is_quit = 0;
  while (is_quit == 0)
  {
    printf("Welcome to stack what do you want to do: \n");
    printf("1. Push to stack\n");
    printf("2. Pop from stack\n");
    printf("3. Peek stack\n");
    printf("4. Check if empty\n");
    printf("5. Quit Program\n");

    int input;
    scanf("%d", &input);
    switch (input)
    {
    case 1:
      int data;
      printf("Enter data to push in stack: ");
      scanf("%d", &data);
      push(data,stack);
      break;
    case 2:
      pop(stack);
      break;
    case 3:
      peek(stack);
      break;
    case 4:
      isEmpty(stack);
      break;
    case 5:
      is_quit = 1;
      break;
    default:
      printf("Please enter a proper value");
      break;
    }
  }
  return 0;
}

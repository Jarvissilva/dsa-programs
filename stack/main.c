#include <stdio.h>
#include "header.h"

int main()
{
  int is_quit = 0;
  while (is_quit == 0)
  {
    printf("Welcome to stack what do you want to do: \n");
    printf("1. Push to stack\n");
    printf("2. Pop from stack\n");
    printf("3. Peek stack\n");
    printf("4. Check if empty\n");
    printf("5. Check if full\n");
    printf("6. Quit Program\n");

    int input;
    scanf("%d", &input);
    switch (input)
    {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      peek();
      break;
    case 4:
      isEmpty();
      break;
    case 5:
      isFull();
      break;
    case 6:
      is_quit = 1;
      break;
    default:
      printf("Please enter a proper value");
      break;
    }
  }
  return 0;
}

#include <stdio.h>
#include <string.h>

#define size 100

int main() {
    int top = -1;
    char stack[size];

    char data[] = "{[()]}";

    for (int i = 0; i < strlen(data); i++) {
        char c = data[i];

        if (c == '(' || c == '{' || c == '[') {
            if (top < size - 1) {
                stack[++top] = c;
            } else {
                printf("Stack overflow\n");
                return 1; 
            }
        } else if (c == ')' || c == '}' || c == ']') {
            if (top == -1) {
                printf("Stack is not balanced\n");
                return 1; 
            } else {
                char topChar = stack[top];
                if ((c == ')' && topChar == '(') ||
                    (c == '}' && topChar == '{') ||
                    (c == ']' && topChar == '[')) {
                    top--;
                } else {
                    printf("Stack is not balanced\n");
                    return 1; 
                }
            }
        }
    }

    if (top == -1) {
        printf("Stack is balanced\n");
    } else {
        printf("Stack is not balanced\n");
    }

    return 0;
}

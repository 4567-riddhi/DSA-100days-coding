#include <stdio.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    top++;
    stack[top] = value;
}

// Pop function
int pop() {
    int value = stack[top];
    top--;
    return value;
}

int main() {
    char postfix[100];
    int i, a, b, result;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    for (i = 0; postfix[i] != '\0'; i++) {

        // If operand (number)
        if (isdigit(postfix[i])) {
            push(postfix[i] - '0');   // convert char to int
        }

        // If operator
        else {
            b = pop();
            a = pop();

            switch (postfix[i]) {
                case '+':
                    push(a + b);
                    break;
                case '-':
                    push(a - b);
                    break;
                case '*':
                    push(a * b);
                    break;
                case '/':
                    push(a / b);
                    break;
            }
        }
    }

    result = pop();
    printf("Result = %d", result);

    return 0;
}
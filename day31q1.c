#include <stdio.h>

#define MAX 100   // Maximum size of stack

int stack[MAX];
int top = -1;     // Initially stack is empty

// Function to push element
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
    }
}

// Function to pop element
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d\n", stack[top]);
        top--;
    }
}

// Function to display stack (top to bottom)
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);   // number of operations

    for (int i = 0; i < n; i++) {
        int choice, value;

        scanf("%d", &choice);

        if (choice == 1) {      // Push
            scanf("%d", &value);
            push(value);
        } 
        else if (choice == 2) { // Pop
            pop();
        } 
        else if (choice == 3) { // Display
            display();
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 5

int stack[MAX_SIZE], top = -1;

// check if stack is empty
bool isEmpty() {
    return top == -1;
}

// push element
void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
    } else {
        stack[++top] = item;
    }
}

// pop element
int pop() {
    if (isEmpty()) {
        printf("Stack underflow!\n");
        return -1;  // indicate underflow
    } else {
        return stack[top--];
    }
}

// peek top element
int peek() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack[top];
    }
}

// show stack elements
void show() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// main
int main() {
    int ch, data;
    do {
        printf("\n1.push\n2.pop\n3.peek\n4.show\n5.exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                printf("Popped: %d\n", pop());
                break;
            case 3:
                printf("Top element: %d\n", peek());
                break;
            case 4:
                show();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Enter a valid choice!\n");
        }
    } while (ch != 5);

    return 0;
}

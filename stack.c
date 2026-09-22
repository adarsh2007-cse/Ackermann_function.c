// creating a stack of integers to learn push, pop, display and exit using array implementation
#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

//pushing an element onto stack
void push() {
    int item;
    if (top == MAX-1) {
        printf("Stack overflow.\n");
    } else {
        printf("Enter an item to be inserted: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
}

//poping an element onto stack
void pop() {
    if (top == -1) {
        printf("Stack is empty or stack underflow.\n");
    } else {
        printf("Item deleted is %d\n", stack[top--]);
    }
}
//displaying the data in the stack
void display() {
    int i = top;
    if (top == -1) {
        printf("Stack is empty.\n");
        printf("Nothing to display.\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
    }
}
//Main function
int main() {
    int choice;
    while(1) {
        printf("Enter your choice: 1-push, 2-pop, 3-display, 4-exit: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: return 0;

            default: printf("Invalid choice!\n");
        }
    }
   return 0;
}
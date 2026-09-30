#include <stdio.h>
#include <stdlib.h>

struct stack {
    int data;
    struct stack *next;
};

struct stack *top = NULL;

void insert(int value) {
    struct stack *newnode = (struct stack *)malloc(sizeof(struct stack));

    if (newnode == NULL) {
        printf("Stack Overflow\n");
        return;
    }

    newnode->data = value;
    newnode->next = top;
    top = newnode;

    printf("%d is inserted in stack\n", value);
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty, can't delete.\n");
        return;
    }

    struct stack *temp = top;
    top = top->next;

    printf("Popped element is %d\n", temp->data);

    free(temp);
}

void display() {
    struct stack *temp = top;

    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements are:\n");

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void peak(){
    if(top == NULL){
        printf("Stack is empty.");
    }
    struct stack*temp = top;
    printf("Top element of stack is %d", temp->data);

}

int main() {
    int choice, value;

    while (1) {
        printf("\n.......Stack implementation using linked list.......\n");
        printf("1. Insert element in stack\n");
        printf("2. Pop element from stack\n");
        printf("3. Display elements of stack\n");
        printf("4. Exit\n");
        printf("5. Peack operation....\n");

        printf("Enter your choice: ");

        // if (scanf("%d", &choice) != 1) {
        //     printf("Invalid input! Please enter a number.\n");
        //     while (getchar() != '\n');
        //     continue;
        // }
        scanf("%d",&choice);
        
        switch (choice) {

            case 1:
                printf("Enter your inserting value: ");
                scanf("%d", &value);
                insert(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program exited.\n");
                exit(0);


            case 5:
                peak();
                break;
            default:
                printf("Invalid choice!!\n");
        }
    }

    return 0;
}
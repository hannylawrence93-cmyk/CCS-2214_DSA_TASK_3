#include <stdio.h>
#define SIZE 5

int deque[SIZE];

int front = -1;
int rear = -1;

// Check whether deque is full
int isFull() {
    return ((front == 0 && rear == SIZE - 1) ||
            (front == rear + 1));
}

// Check whether deque is empty
int isEmpty() {
    return (front == -1);
}

// Insert at front
void insertFront(int value) {

    if (isFull()) {
        printf("Deque Overflow!\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    }
    else if (front == 0) {
        front = SIZE - 1;
    }
    else {
        front--;
    }

    deque[front] = value;

    printf("%d inserted at front.\n", value);
}

// Insert at rear
void insertRear(int value) {

    if (isFull()) {
        printf("Deque Overflow!\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    }
    else if (rear == SIZE - 1) {
        rear = 0;
    }
    else {
        rear++;
    }

    deque[rear] = value;

    printf("%d inserted at rear.\n", value);
}

// Delete from front
void deleteFront() {

    if (isEmpty()) {
        printf("Deque Underflow!\n");
        return;
    }

    printf("Deleted from front: %d\n", deque[front]);

    if (front == rear) {
        front = rear = -1;
    }
    else if (front == SIZE - 1) {
        front = 0;
    }
    else {
        front++;
    }
}

// Delete from rear
void deleteRear() {

    if (isEmpty()) {
        printf("Deque Underflow!\n");
        return;
    }

    printf("Deleted from rear: %d\n", deque[rear]);

    if (front == rear) {
        front = rear = -1;
    }
    else if (rear == 0) {
        rear = SIZE - 1;
    }
    else {
        rear--;
    }
}

// Display deque
void display() {

    int i;

    if (isEmpty()) {
        printf("Deque is empty.\n");
        return;
    }

    printf("Deque elements: ");

    i = front;

    while (1) {
        printf("%d ", deque[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
}

int main() {

    insertRear(10);
    insertRear(20);
    insertFront(5);

    display();

    deleteFront();
    deleteRear();

    display();

    return 0;
}
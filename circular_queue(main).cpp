#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int n) {
    if ((rear + 1) % N == front) {
        printf("Queue is full\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = n;
    } else {
        rear = (rear + 1) % N;
        queue[rear] = n;
    }
}

void dequeue() {
    int val;
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else {
        val = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % N;
        }
        printf("\nDeleted element = %d\n", val);
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else {
        int i = front;
        do {
            printf("%d ", queue[i]);
            i = (i + 1) % N;
        } while (i != (rear + 1) % N);
        printf("\n");
    }
}

int main() {
    int ch, val;
    while (1) {
        printf("\n1 - for enqueue");
        printf("\n2 - for dequeue");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the data: ");
                scanf("%d", &val);
                enqueue(val);
                display();
                break;
            case 2:
                dequeue();
                display();
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
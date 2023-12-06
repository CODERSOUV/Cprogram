#include <stdio.h>
#define max 100

int queue[max];
int front = -1, rear = -1;

void enqueue(int data) {
    if (rear == max - 1) {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = data;
}

int dequeue() {
    if (front == -1) {
        printf("Underflow\n");
        return 0;
    }
    if (front == rear)
        front = rear = -1;
    int dequeue = queue[front];
    front++;
    return dequeue;
}

void display() {
    printf("Displaying the queue: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    int ch, data;
    while (1) {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            printf("Enter data to perform enqueue: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            printf("Dequeued data is %d\n", dequeue());
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting the program\n");
            return 0;
        default:
            printf("Wrong choice\n");
        }
    }
}

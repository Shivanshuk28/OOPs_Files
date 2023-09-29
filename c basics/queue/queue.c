#include <stdio.h>
#define SIZE 100
int queue[SIZE];
int front = -1;
int rear = -1;
void enqueue(int item)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full. Cannot enqueue element.\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = item;
}
int dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("No elements in the array.\n");
        return -1;                                         
    }                                                  // 1 2 3 4 5
    int item = queue[front];
    front++;
    if (front > rear)
    {
        // Reset the queue when it becomes empty
        front = rear = -1;
    }
    return item;
}
void display()
{
    if (front == -1 || front > rear)
    {
        printf("No elements in the array.\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int main()
{
    int element;
    while (1)
    {
        printf("Enter an element (-1 to stop): ");
        scanf("%d", &element);
        if (element == -1)
        {
            break;
        }
        enqueue(element);
    }
    display();
    int choice;
    do
    {
        printf("Do you want to dequeue an element? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int dequeued_element = dequeue();
            if (dequeued_element != -1)
            {
                // printf("Dequeued element: %d\n", dequeued_element);
                display();
            }
        }
    } while (choice == 1);
    return 0;
}

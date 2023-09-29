#include <stdio.h>
#define SIZE 12
struct queue
{
    int front;
    int rear;
    int array[SIZE];
};
void init(struct queue *q)
{
    q->front = -1;
    q->rear = -1;
}
int isfull(struct queue *q)
{
    return (q->rear + 1) % SIZE == q->front;
}
int isempty(struct queue *q)
{
    return q->front == q->rear == -1;
}
void enqueue(struct queue *q,int element)
{
    if (isfull(q))
    {
        printf("queue is full...\n");
    }
    if (isempty(q))
    {
        printf("queue is empty... assigning..\n");
        q->front = 0;
        q->rear = 0;
    }
    else
    {
        q->rear = (q->rear + 1) % SIZE;
    }
    q->array[q->rear] = element;
}
int dequeue(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue is empty..");
        return;
    }
    int item = q->array[q->front];
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % SIZE;
    }
    return item;
}
int main()
{
    struct queue q;
    init(&q);
    printf("Enter queue\n");
    enqueue(&q, 10);
    enqueue(&q, 30);
    enqueue(&q, 40);
    printf("Element dequeued %d\n", dequeue(&q));
    printf("Element dequeued %d\n", dequeue(&q));
    printf("Element dequeued %d\n", dequeue(&q));
    printf("Element dequeued %d\n", dequeue(&q));
}
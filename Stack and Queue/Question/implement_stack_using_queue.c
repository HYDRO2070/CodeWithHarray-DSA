#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
int isempty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}
void push(struct queue *q, int data)
{
    if (isfull(q))
    {
        printf("Overflow");
    }
    else
    {
        q->r++;
        q->arr[q->r] = data;
    }
}
int pop(struct queue *q)
{
    int val = -1;
    if (isempty(q))
    {
        printf("Underflow");
    }
    else
    {
        val = q->arr[q->r];
        q->r--;
    }
    return val;
}
int peek(struct queue *q, int index)
{
    return q->arr[index];
}
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 10;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    push(q, 1);
    push(q, 2);
    printf("%d\n", pop(q));
    printf("%d\n", pop(q));
    printf("%d\n", pop(q));
    return 0;
}
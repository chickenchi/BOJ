#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MX 2000000

typedef int element;

typedef struct {
    int rear;
    int front;
    element *data;
} Queue;

void init(Queue *q)
{
    q -> rear = -1;
    q -> front = -1;
    q -> data = (int*)malloc(sizeof(int)*MX);
}

void Fr(Queue *q)
{
    free(q -> data);
}

void push(Queue *q, int data)
{
    q -> data[++(q -> rear)] = data;
}

element isEmpty(Queue *q)
{
    return q->rear==q->front;
}

element pop(Queue *q)
{
    if(isEmpty(q)) return -1;
    return q -> data[++(q -> front)];
}

element size(Queue *q)
{
    return q->rear - q->front;
}

element front(Queue *q)
{
    if(isEmpty(q)) return -1;
    return q -> data[(q -> front)+1];
}

element back(Queue *q)
{
    if(isEmpty(q)) return -1;
    return q -> data[(q -> rear)];
}

int main()
{
    Queue q;
    int a, ps;
    char str[6];

    init(&q);

    scanf("%d",&a);
    while(a--)
    {
        scanf(" %s",&str);
        if(!strcmp(str, "push"))
        {
            scanf("%d",&ps);
            push(&q, ps);
        }
        else if(!strcmp(str, "pop")) printf("%d\n",pop(&q));
        else if(!strcmp(str, "size")) printf("%d\n",size(&q));
        else if(!strcmp(str, "empty")) printf("%d\n",isEmpty(&q));
        else if(!strcmp(str, "front")) printf("%d\n",front(&q));
        else printf("%d\n",back(&q));
    }

    Fr(&q);
    return 0;
}
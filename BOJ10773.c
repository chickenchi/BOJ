#include <stdio.h>
#define MX 100000
typedef int element;
typedef struct {
    element data[MX];
    int top;
} Stack;

element isFull(Stack *s)
{
    return s->top==MX-1;
}

element isEmpty(Stack *s)
{
    return s->top==-1;
}

void push(Stack *s, int d)
{
    if(isFull(s)) return;
    s->data[++(s->top)]=d;
}

element pop(Stack *s)
{
    if(isEmpty(s)) return 0;
    return s->data[(s->top)--];
}

int main()
{
    Stack s;
    int a,b,r=0;
    s.top=-1;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&b);
        if(b!=0) push(&s, b);
        else pop(&s);
    }
    for(int i=0;i<=s.top;i++) r+=s.data[i];
    printf("%d",r);
    return 0;
}
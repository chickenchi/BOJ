#include <stdio.h>
#include <string.h>
#define MX 100000

typedef char element;
typedef struct {
    element data[MX];
    int top;
} Stack;

int isFull(Stack *s)
{
    return s->top==MX-1;
}

int isEmpty(Stack *s)
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
    int a,t=1;
    char b[50];
    scanf("%d",&a);
    while(a--)
    {
        s.top=-1;
        t=1;
        scanf(" %s",b);
        for(int i=0;i<strlen(b);i++)
            if(b[i]=='(') push(&s, b[i]);
            else if(b[i]==')')
                if(!pop(&s)) t=0;
        printf("%s\n", !t || s.top!=-1 ? "NO" : "YES");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#define MX 200

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
    int t=1;
    char b[MX];
    char q;
    fgets(b,MX,stdin);
    while(1)
    {
        s.top=-1;
        t=1;
        for(int i=0;i<strlen(b);i++)
            if(b[i]=='(' || b[i]=='[') push(&s, b[i]);
            else if(b[i]==')' || b[i]==']')
            {
                q=pop(&s);
                if(!q || q=='(' && b[i]!=')' || q=='[' && b[i]!=']') t=0;
            }
        printf("%s\n", !t || s.top!=-1 ? "no" : "yes");
        fgets(b,MX,stdin);
        if(b[0]=='.') break;
    }
    return 0;
}
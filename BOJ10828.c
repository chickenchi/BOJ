#include <stdio.h>
#include <string.h>
#define MX 10000

int stack[MX],i=-1;

int isEmpty()
{
    if(i<0) return 1;
    else return 0;
}

int isFull()
{
    if(i>=MX-1) return 1;
    else return 0;
}

void push(int value)
{
    if(!isFull()) stack[++i]=value;
}

int pop()
{
    if(isEmpty()) printf("-1\n");
    else
    {
        printf("%d\n",stack[i]);
        return stack[i--];
    }
}

int size()
{
    return i+1;
}

int top()
{
    if(isEmpty()) return -1;
    else return stack[i];
}

int main()
{
    int a,c;
    char b[10];
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        scanf("%s",b);
        if(!strcmp(b,"push"))
        {
            scanf("%d",&c);
            push(c);
        }
        else if(!strcmp(b,"empty"))
            printf("%d\n",isEmpty());
        else if(!strcmp(b,"top"))
            printf("%d\n",top());
        else if(!strcmp(b,"size"))
            printf("%d\n",size());
        else if(!strcmp(b,"pop")) pop();
    }
    return 0;
}

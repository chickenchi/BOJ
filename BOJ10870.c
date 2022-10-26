#include <stdio.h>

int b[55]={0};

int f(int a)
{
    if(b[a]) return b[a];
    if(a==0) return 0;
    if(a<=2) return 1;
    return b[a]=f(a-2)+f(a-1);
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",f(a));
    return 0;
}
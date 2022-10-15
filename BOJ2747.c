#include <stdio.h>
int m[100]={0,1,1};

int f(int a)
{
    if(m[a]) return m[a];
    return m[a]=f(a-1)+f(a-2);
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",f(a));
    return 0;
}
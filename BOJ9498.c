#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%c",a>89?'A':a>79?'B':a>69?'C':a>59?'D':'F');
    return 0;
}
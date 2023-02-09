#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for(int i=0; i<a; i++, puts(""))
    {
        for(int j=0; j<i; j++) printf(" ");
        for(int j=+i; j<a; j++) printf("*");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define MX 1000000

int main()
{
    int a,hr=-MX,lr=MX;
    int *b=(int*)malloc(sizeof(int)*MX);
    scanf("%d",&a);
    for(int i=0;i<a;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<a;i++)
        if(b[i]>hr) hr=b[i];
    for(int i=0;i<a;i++)
        if(b[i]<lr) lr=b[i];
    printf("%d %d",lr, hr);
    free(b);
    return 0;
}
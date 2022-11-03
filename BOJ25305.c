#include <stdio.h>
#include <stdlib.h>
#define MX 1000

int compare(const void *a, const void *b)
{
    if(*(int*)a > *(int*)b) return 1;
    else if(*(int*)a < *(int*)b) return -1;
    else return 0;
}

int main()
{
    int b,c;
    int *a=(int*)malloc(sizeof(int)*MX);
    scanf("%d%d",&b,&c);
    for(int i=0;i<b;i++)
        scanf("%d",&a[i]);
    qsort(a, b, sizeof(int), compare);
    printf("%d\n",a[b-c]);
    return 0;
}
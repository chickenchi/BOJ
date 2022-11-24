#include <stdio.h>
#include <stdlib.h>
#define MX 3

int compare(const void *a, const void *b)
{
    if(*(int*)a < *(int*)b) return 1;
    else if(*(int*)a > *(int*)b) return -1;
    else return 0;
}

int main()
{
    int a[MX], i=MX;
    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    qsort(a, MX, sizeof(int), compare);
    while(i--) printf("%d ", a[i]);
    return 0;
}
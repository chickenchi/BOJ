#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Cdn;

int compare(const void *a, const void *b)
{
    if(((Cdn*)a) -> y < ((Cdn*)b) -> y) return -1;
    else if(((Cdn*)a) -> y > ((Cdn*)b) -> y) return 1;
    else if(((Cdn*)a) -> x < ((Cdn*)b) -> x) return -1;
    else return 1;
}

int main()
{
    Cdn cdn[100001];
    int a, i=-1;
    scanf("%d",&a);
    while(i++<a-1)
        scanf("%d %d",&cdn[i].x, &cdn[i].y);
    qsort(cdn, a, sizeof(Cdn), compare);
    i=-1;
    while(i++<a-1)
        printf("%d %d\n",cdn[i].x, cdn[i].y);
    return 0;
}
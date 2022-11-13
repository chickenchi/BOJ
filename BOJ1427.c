#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    if(*(char*)a < *(char*)b) return 1;
    else if(*(char*)a > *(char*)b) return -1;
    else return 0;
}

int main()
{
    char a[11];
    scanf("%s", a);
    qsort(a, strlen(a), sizeof(char), compare);
    printf("%s", a);
    return 0;
}
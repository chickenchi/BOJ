#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    char *t = (char*)a;
    char *c = (char*)b;
    if(strlen(t) > strlen(c)) return 1;
    else if(strlen(t) < strlen(c)) return -1;
    else return strcmp(t, c);
}

int main()
{
    int a;
    char b[20005][55];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
        scanf("%s",b[i]);
    qsort(b, a, sizeof(b[0]), compare);
    for(int i=0;i<a;i++)
        if(strcmp(b[i-1],b[i])) printf("%s\n",b[i]);
    return 0;
}
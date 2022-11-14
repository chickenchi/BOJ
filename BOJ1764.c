#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MX 500000

char arr[MX][21];

char tarr[MX][21];

int compare(const void *a, const void *b)
{
    char *a1 = (char*)a;
    char *b1 = (char*)b;
    return strcmp(a1, b1);
}

int main()
{
    int a, b, cout=0;
    int fir, mid, ls;
    char ar[21];
    scanf("%d %d", &a, &b);
    for(int i=0;i<a;i++) scanf("%s", arr[i]);
    qsort(arr, a, sizeof(arr[0]), compare);

    for(int i=0;i<b;i++)
    {
        fir=0;
        ls=a-1;
        scanf("%s", ar);
        while(fir<=ls)
        {
            mid=(fir+ls)/2;
            if(strcmp(arr[mid], ar) > 0) ls = mid - 1;
            else if(strcmp(arr[mid], ar) < 0) fir = mid + 1;
            else break;
        }

        if(fir<=ls) strcpy(tarr[cout++], ar);
    }
    printf("%d\n", cout);
    qsort(tarr, cout, sizeof(tarr[0]), compare);
    for(int i=0;i<cout;i++) printf("%s\n", tarr[i]);
    return 0;
}
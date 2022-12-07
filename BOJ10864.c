#include <stdio.h>

int arr[1001][1001];

int main()
{
    int a, b;
    int f1, f2;
    int tot=0;
    scanf("%d %d", &a, &b);
    for(int i=0; i<b; i++)
    {
        scanf("%d %d", &f1, &f2);
        arr[f1][f2]=1;
        arr[f2][f1]=1;
    }
    for(int i=1; i<=a; i++, tot=0)
    {
        for(int j=1; j<=a; j++)
            if(arr[i][j] && i!=j) tot++;
        printf("%d\n", tot);
    }
    return 0;
}
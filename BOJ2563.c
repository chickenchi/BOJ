#include <stdio.h>

int arr[101][101];

int main()
{
    int a, tot=0;
    int x, y;
    scanf("%d", &a);
    while(a--)
    {
        scanf("%d %d", &x, &y);
        for(int i=y;i<y+10;i++)
            for(int j=x;j<x+10;j++)
                arr[i][j]=1;
    }
    for(int i=1;i<=100;i++)
        for(int j=1;j<=100;j++)
            tot+=arr[i][j];
    printf("%d", tot);
    return 0;
}
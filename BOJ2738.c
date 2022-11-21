#include <stdio.h>

int main()
{
    int a, b;
    int arr[101][101];
    int plus;
    scanf("%d %d", &a, &b);
    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++)
            scanf("%d", &arr[i][j]);
    for(int i=1;i<=a;i++,puts(""))
        for(int j=1;j<=b;j++)
        {
            scanf("%d", &plus);
            printf("%d ", arr[i][j]+plus);
        }
    return 0;
}
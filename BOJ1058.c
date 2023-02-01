#include <stdio.h>

int a, max, r;
int rs[51];
char arr[52][52];

void unionz(int i, int t)
{
    for(int j=0; j<a; j++)
    {
        if(i==j) continue;
        if(arr[i+1][j] == 'Y')
        {
            rs[j] = 1;
            if(t==1) unionz(j, 2);
        }
    }
}

int arrcout(int b)
{
    if(b>a) return 0;
    return arrcout(b+1) + rs[b];
}

int main()
{
    scanf("%d", &a);
    for(int i=1; i<=a; i++)
        scanf(" %s", arr[i]);

    for(int i=0; i<a; i++)
    {
        unionz(i, 1);
        rs[i]=0;
        r = arrcout(0);
        for(int i=0; i<=a; i++) rs[i] = 0;
        if(max < r) max = r;
    }
    printf("%d", max);
    return 0;
}
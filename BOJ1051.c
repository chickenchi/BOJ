#include <stdio.h>

int main()
{
    int a,b,t,r=1;
    int c[101][101]={};
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++)
            scanf("%1d",&c[i][j]);
    if(a>b) t=b;
    else t=a;
    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++)
            for(int m=2;m<=t;m++)
                if(c[i][j]==c[i+m-1][j] && c[i][j]==c[i][j+m-1] && c[i][j]==c[i+m-1][j+m-1] && r<m*m)
                    if(i+m-1<=a && j+m-1<=b)
                        r=m*m;
    printf("%d",r);
    return 0;
}

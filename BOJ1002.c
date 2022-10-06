#include <stdio.h>
#include <math.h>

int main()
{
    int a,x1,x2,y1,y2,r1,r2;
    double d;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        scanf("%d%d%d",&x1,&y1,&r1);
        scanf("%d%d%d",&x2,&y2,&r2);
        d=sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
        if(d)
        {
            if(abs(r1-r2)>d || r1+r2<d) printf("0\n");
            else if(r1+r2==d || abs(r1-r2)==d) printf("1\n");
            else if(r1+r2>d && abs(r1-r2)<d) printf("2\n");
        }
        else
        {
            if(r1==r2) printf("-1\n");
            else printf("0\n");
        }
    }
    return 0;
}
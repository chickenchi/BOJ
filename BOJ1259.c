#include <stdio.h>

int main()
{
    int a, i, t=0;
    int b[6]={0};
    scanf("%d",&a);
    while(a)
    {
        t=0;
        for(i=1;a/10;i++)
        {
            b[i]=a%10;
            a/=10;
        }

        b[i]=a%10;

        for(int j=1;j/2<=i;j++)
        {
            if(b[j]!=b[i])
            {
                t=1;
                break;
            }
            i--;
        }
        printf("%s\n", t ? "no" : "yes");
        scanf("%d",&a);
    }
    return 0;
}
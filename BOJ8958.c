#include <stdio.h>
#include <string.h>

int main()
{
    int a,r=0,s=0;
    char b[81];
    scanf("%d",&a);
    for(int i=1;i<=a;i++,r=0,s=0)
    {
        scanf("%s",b);
        for(int i=0;i<strlen(b);i++)
            if(b[i]=='O') ++r,s+=r;
            else r=0;
        printf("%d\n",s);
    }
    return 0;
}
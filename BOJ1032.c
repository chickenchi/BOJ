#include <stdio.h>

int main()
{
    int a;
    char b[51],c[51];
    scanf("%d",&a);
    scanf("%s",b);
    for(int i=1;i<a;i++)
    {
        scanf("%s",c);
        for(int j=0;b[j]!='\0';j++)
            if(b[j]!=c[j]) b[j]='?';
    }
    printf("%s",b);
    return 0;
}

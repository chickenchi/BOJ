#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",b<c?a/(c-b)+1:-1);
    return 0;
}


//main(a,b,c){scanf("%d%d%d",&a,&b,&c);printf("%d",b<c?a/(c-b)+1:-1);}

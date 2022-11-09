#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        if(a%10==1 || a%10==5 || a%10==6 || !a) printf("%d",a%10);
        else if(a%10==0 && a) printf("10");
        else if(a%10==4)
            if(b%2==0) printf("6");
            else printf("%d",a%10);
        else if(a%10==9)
            if(b%2==0) printf("1");
            else printf("%d",a%10);
        else if(a%10==2)
            if(b%4==2) printf("4");
            else if(b%4==3) printf("8");
            else if(b%4==0) printf("6");
            else printf("%d",a%10);
        else if(a%10==3)
            if(b%4==2) printf("9");
            else if(b%4==3) printf("7");
            else if(b%4==0) printf("1");
            else printf("%d",a%10);
        else if(a%10==7)
            if(b%4==2) printf("9");
            else if(b%4==3) printf("3");
            else if(b%4==0) printf("1");
            else printf("%d",a%10);
        else if(a%10==8)
            if(b%4==2) printf("4");
            else if(b%4==3) printf("2");
            else if(b%4==0) printf("6");
            else printf("%d",a%10);
        puts("");
    }
    
    return 0;
}
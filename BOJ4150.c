#include <stdio.h>
#include <string.h>

int main()
{
    char a[2];
    double result=0;
    gets(a);
    if(a[1]=='-') result-=0.3;
    else if(a[1]=='+') result+=0.3;
    if(a[0]=='A') result+=4.0;
    if(a[0]=='B') result+=3.0;
    if(a[0]=='C') result+=2.0;
    if(a[0]=='D') result+=1.0;
    printf("%.1f", result);
    return 0;
}
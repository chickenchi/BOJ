#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[3][10];
    char cl[10][10]={"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    long long int b;
    for(int i=0;i<3;i++) scanf(" %s",a[i]);
    for(int i=0;i<10;i++)
        if(!strcmp(cl[i],a[0])) b=i*10;
    for(int i=0;i<10;i++)
        if(!strcmp(cl[i],a[1])) b+=i;
    for(int i=0;i<10;i++)
        if(!strcmp(cl[i],a[2])) b*=(int)pow(10,i);
    printf("%lld",b);
    return 0;
}
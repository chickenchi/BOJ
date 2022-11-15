#include <stdio.h>
#include <string.h>
#include <math.h>

int dx[2]={0};
int b, st, t, di, i=-1;

int main()
{   
    char a[200];
    char arr[100][30];
    scanf("%d",&b);
    dx[1]=b-1;
    scanf("%s",a);
    while(a[++i]!='\0')
    {
        arr[st][abs(dx[t%2]-i%b)]=a[i];
        if((i+1)%b==0)
        {
            st++;
            t++;
        } 
    }
    for(int i=0;i<b;i++)
        for(int j=0;j<strlen(a)/b;j++)
            printf("%c", arr[j][i]);
    return 0;
}
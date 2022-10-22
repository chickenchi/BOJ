#include <stdio.h>
#include <string.h>

int main()
{
    char a[15],r=0;
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
        if(a[i]>='A' && a[i]<='C') r+=3;
        else if(a[i]>='D' && a[i]<='F') r+=4;
        else if(a[i]>='G' && a[i]<='I') r+=5;
        else if(a[i]>='J' && a[i]<='L') r+=6;
        else if(a[i]>='M' && a[i]<='O') r+=7;
        else if(a[i]>='P' && a[i]<='S') r+=8;
        else if(a[i]>='T' && a[i]<='V') r+=9;
        else if(a[i]>='W' && a[i]<='Z') r+=10;
    printf("%d",r);
	return 0;
}
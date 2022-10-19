#include <stdio.h>
#include <string.h>

int main()
{
    char a[300],r=0,t=0;
    scanf("%s",a);
    for(int i=0;i<strlen(a);i+=t)
    {
        t=0;
        if(a[i]=='c' && a[i+1]=='=') r++,t=2;
        else if(a[i]=='c' && a[i+1]=='-') r++,t=2;
        else if(a[i]=='d' && a[i+1]=='z' && a[i+2]=='=') r++,t=3;
        else if(a[i]=='d' && a[i+1]=='-') r++,t=2;
        else if(a[i]=='l' && a[i+1]=='j') r++,t=2;
        else if(a[i]=='n' && a[i+1]=='j') r++,t=2;
        else if(a[i]=='s' && a[i+1]=='=') r++,t=2;
        else if(a[i]=='z' && a[i+1]=='=') r++,t=2;
        else r++,t=1;
    }
    printf("%d",r);
	return 0;
}
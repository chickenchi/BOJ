#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MX 1000000
int main()
{
    int cnt=0;
	char *a=(char*)malloc(sizeof(char)*MX);
    while(~scanf("%s",a))
    {
        for(int i=0;i<strlen(a);i++)
            if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
            {
                cnt++;
                for(i;i<strlen(a);i++)
                    if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z') continue;
                    else break;
            }
    }
    printf("%d",cnt);
    free(a);
	return 0;
}
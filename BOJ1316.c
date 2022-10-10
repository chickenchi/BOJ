#include <stdio.h>
#include <string.h>

int main()
{
    char a[300];
    int r=0, c, f=0, j;
    int alphabet[26]={0,};
    scanf("%d",&c);
    for(int h=0;h<c;h++,f=0)
    {
        scanf("%s",a);
        for(int i=0;i<strlen(a);i++)
        {
            if(!alphabet[a[i]-'a']) alphabet[a[i]-'a']=1;
            else
            {
                f=1;
                break;
            }
            for(j=i;j<strlen(a);j++)
                if(a[i]!=a[j]) break;
            i=j-1;
        }
        for(int i=0;i<26;i++) alphabet[i]=0;
        if(!f) r++;
    }
    printf("%d",r);
	return 0;
}
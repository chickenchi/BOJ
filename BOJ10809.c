#include <stdio.h>
#include <string.h>

int main()
{
    char S[100];
    int alphabet[26]={0};
    scanf("%s",S);
    for(int i=0;i<26;i++)
        alphabet[i]=-1;
    for(int i=0;i<strlen(S);i++)
        if(alphabet[S[i]-'a']==-1) alphabet[S[i]-'a']=i;
    for(int i=0;i<26;i++)
        if(alphabet[i]==-1) printf("-1 ");
        else printf("%d ",alphabet[i]);
    return 0;
}
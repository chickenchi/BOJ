#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000001],rc;
	int i=0,alphabet[27]={0,},rank=0;
	scanf("%s",s);
	while(s[i]!='\0')
	{
		if(s[i]>='a'&&s[i]<='z') s[i]-=32;
		alphabet[s[i++]-64]+=1;
	}
	i=-1;
	while(sizeof(alphabet)/4>++i)
	{
		if(rank<alphabet[i]) rank=alphabet[i],rc=i+64;
		else if(rank==alphabet[i]) rc='?';
	}
	printf("%c",rc);
	return 0;
}
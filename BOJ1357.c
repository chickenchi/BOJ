#include <stdio.h>
#include <string.h>

char a[5], b[5];
int ar, br, st;

int rev(char arr[]);
int printrev(int t);

int main()
{
	scanf("%s %s", a, b);
	ar = rev(a);
	br = rev(b);
	int t = ar + br;
	printrev(t);
	return 0;
}

int rev(char arr[])
{
	int st=0, get=0;
	
	for(int i=strlen(arr)-1; i>=0; i--)
		if(st || arr[i]!='0') 
		{
			get=get*10+(arr[i]-'0');
			st=1;
		}
	return get;
}

int printrev(int t)
{
	if(st != 0 || t%10 != 0) 
	{
		printf("%d", t%10);
		st=1;
	}
	if(t / 10 == 0) return 0;
	return printrev(t / 10);
}
#include <stdio.h>

int main()
{
	int a, ans=0, d=2;
	scanf("%d", &a);
	for(int i=1; d<=a; d += i%2 ? 5 : 2, i++)
		if(a==d)
		{
			ans=1;
			break;
		}
	
	printf(!ans ? "SK" : "CY");
	return 0;
}
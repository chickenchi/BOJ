#include <stdio.h>
#include <string.h>

int a;

int recursion(const char *s, int l, int r)
{
	a++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s)
{
    return recursion(s, 0, strlen(s)-1);
}

int main()
{
	int T;
	char arr[1001];
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		scanf(" %s", arr);
    	printf("%d ", isPalindrome(arr));
		printf("%d\n", a);
		a = 0;
	}
	return 0;
}
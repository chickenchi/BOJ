#include <stdio.h>

int b;

long long int m[10001];

long long int f(long long int a)
{
    if(m[a]) return m[a];
	if(a<2) return a % b;
	if(a==2) return 1 % b;
    return m[a] = (f(a-1) + f(a-2)) % b;
}

int main()
{
	int query;
    int a;
	scanf("%d", &query);
	for(int i=1;i<=query;i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %lld\n", i, f(a));
		for(int j=3;j<10001;j++) m[j]=0;
	}
    return 0;
}
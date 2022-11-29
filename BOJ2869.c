#include <stdio.h>

typedef long long int ll;

int arr[1001]={1};
int backarr[1001]={0};
int barr[1001]={0};

ll a, col;

int main()
{
	scanf("%lld", &a);
	for(ll i=2;i<=a;i++)
	{
		for(ll j=0;j<=col;j++) backarr[j]=arr[j];
		for(ll j=0;j<=col;j++) arr[j]+=barr[j];
		for(ll j=0;j<=col;j++)
			if(arr[j]/10)
			{
				arr[j+1]+=1;
				arr[j]%=10;
				if(j>=col) col++;
			}
		for(ll j=0;j<=col;j++) barr[j]=backarr[j];
	}
	if(!a) printf("0");
    else for(ll i=col;i>=0;i--) printf("%d", arr[i]);
	return 0;
}
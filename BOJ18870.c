#include <stdio.h>
#define MX 1000001

int a[MX], b[MX], c[MX], b1[MX];

int compare(const void *a, const void *b)
{
	if(*(int*)a > *(int*)b) return 1;
	else if(*(int*)a < *(int*)b) return -1;
	else return 0;
}

int main()
{
	int N, key, i, j, plus=0;
	int fir, mid, lst;
	scanf("%d", &N);
	for(int i=0; i<N; i++) // O(n)
	{
		scanf("%d", &a[i]);
		b[i]=a[i];
	}
	qsort(b, N, sizeof(int), compare); // O(nlogn)
	for(int i=0; i<N; i++) // O(n)
		if(b[i] != b[i-1])
			b1[plus++] = b[i];
	for(int i=0; i<N; i++)
	{
		fir = 0;
		lst = plus - 1;
		while(fir<=lst)
		{
			mid = (fir+lst) / 2;
			if(b1[mid] < a[i]) fir = mid+1;
			else if(b1[mid] > a[i]) lst = mid-1;
			else break;
		}
		printf("%d ", mid);
	}
	return 0;
}
long long sum(int *a, int n) {
	if(n==1) return a[n-1];
    return sum(a, n-1)+a[n-1];
}
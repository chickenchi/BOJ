#include <stdio.h>

typedef long long int ll;

int arr[1000100];

int main()
{
    ll min, max;
    
    int res = 0;
    
    scanf("%lld %lld", &min, &max);
    
    for(ll i = 2; i*i <= max; i++)
    {
        ll str = i*i - min % (i*i);

        /* min ~ max
            min이 1000이고 max가 10000이라 할 때,
            공간은 9000밖에 쓰지 않는다.
            이때, 2의 제곱수인 4의 배수인지 판별하려면
            배열 효율화를 위해서
            1000을 0으로 두기 위해 4에서 min % 4를 뺀다.
            (최소 기준으로 얼마나 떨어져 있는지 보면 되니까)
            하지만 제곱수라면 str을 0으로 둬야 한다.
            (자기가 제곱수면 자기부터 시작해야 하니까)
        */ 
        
        if(str == i*i) str = 0;
        
        for(ll j = str; j <= max-min; j += i*i) arr[j] = 1;
    }
    
    for(int i = 0; i <= max-min; i++) res += !arr[i];
    
    printf("%d", res);
    return 0;
}
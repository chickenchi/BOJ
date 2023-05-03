#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int main()
{
    int a, b, c;
    int ri, rj;

    scanf("%d %d", &a, &b);

    while (a || b)
    {
        ll *arrA = (ll*)malloc(sizeof(ll)*1000001);
        ll *arrB = (ll*)malloc(sizeof(ll)*1000001);

        for(int i=0; i<2; i++)
        {
            ll num = i == 0 ? a : b;
            ll pivot = 0;

            while (1)
            {
                if(!i) arrA[pivot++] = num;
                else arrB[pivot++] = num;

                if (num == 1) break;
                else if (num % 2 == 0) num = num / 2;
                else num = num * 3 + 1;
            }
        }

        for(int i=0; arrA[i]; i++)
        {
            for(int j=0; arrB[j]; j++)
            {
                if(arrA[i] == arrB[j])
                {
                    c = arrA[i];
                    ri = i;
                    rj = j;

                    arrA[i+1] = 0;
                    arrB[j+1] = 0;
                }
            }
        }

        printf("%d needs %d steps, %d needs %d steps, they meet at %d\n", a, ri, b, rj, c);

        scanf("%d %d", &a, &b);

        free(arrA);
        free(arrB);
    }

    return 0;
}
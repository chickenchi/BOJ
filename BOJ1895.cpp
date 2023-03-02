#include <iostream>
#include <algorithm>

using namespace std;

int arr[62][62];
int farr[60][60];

int main()
{
    int a, b;

    cin >> a >> b;

    for(int i=1; i<=a; i++)
        for(int j=1; j<=b; j++)
            cin >> arr[i][j];

    for(int i=1; i<=a-2; i++)
    {
        for(int j=1; j<=b-2; j++)
        {
            int svarr[9];
            int cnt = 0;
            for(int k=i; k<=i+2; k++)
                for(int l=j; l<=j+2; l++)
                    svarr[cnt++] = arr[k][l];
            sort(svarr, svarr+9);
            farr[i][j] = svarr[4];
        }
    }

    int res = 0;
    int sear;

    cin >> sear;

    for(int i=1; i<=a-2; i++)
        for(int j=1; j<=b-2; j++)
            if(farr[i][j] >= sear) res++;

    cout << res;
    return 0;
}
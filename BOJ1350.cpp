#include <iostream>

using namespace std;

int b[50];

int main()
{
    int a;

    cin >> a;

    for(int i=0; i<a; i++) cin >> b[i];

    int c;

    cin >> c;

    long long int result = 0;

    for(int i=0; i<a; i++)
    {
        if(!b[i]) continue;
        if(b[i] > c) result += b[i] % c != 0 ? (b[i] / c + 1) * c : (b[i] / c) * c;
        else if(b[i] <= c) result += c;
    }

    cout << result;

    return 0;
}

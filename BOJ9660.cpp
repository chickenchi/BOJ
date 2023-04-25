#include <iostream>

using namespace std;

int main()
{
    long long int a;
    cin >> a;
    if(a == 2 || a % 7 == 2 || a == 7 || a % 7 == 0) cout << "CY";
    else cout << "SK";
    return 0;
}
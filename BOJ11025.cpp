#include <iostream>

using namespace std;

int main()
{
    int n, k;
    
    cin >> n >> k;
    
    int f = 1;
    
    for(int i=2; i<=n; i++)
    {
        f = ((f + k - 1) % i) + 1;
    }
    
    cout << f;
        
    return 0;
}
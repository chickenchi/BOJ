#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int b[1000];
    int tot=0;
    for(int i=0; i<5; i++)
    {
        cin >> b[i];
        tot += b[i];
    }
    cout << tot / 5 << endl;
    sort(b, b+5);
    cout << b[2];
    return 0;
}
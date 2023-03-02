#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int six = 1001, one = 1001;

    int money = 0;

    for(int i=0; i<b; i++)
    {
        int com, com2;
        cin >> com >> com2;
        six = min(six, com);
        one = min(one, com2);
    }

    if(six > one * 6)
    {
        cout << one * a;
        return 0;
    }

    while(a > 0)
    {
        if(six < one * a)
        {
            a -= 6;
            money += six;
        }
        else
        {
            money += one * a;
            a = 0;
        }
    }

    cout << money;
    return 0;
}
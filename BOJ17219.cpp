#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

string que, list[100010], list1[100010], list2[100010];
int tmp;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    cin.ignore();
    for(int i=0; i<a; i++) getline(cin, list[i]);

    sort(list, list+a);

    for(int i=0; i<a; i++)
    {
        tmp = list[i].find(' ');
        list1[i] = list[i].substr(0, tmp);
        list2[i] = list[i].substr((tmp + 1), tmp - (tmp + 1));
    }

    for(int j=0; j<b; j++)
    {
        getline(cin, que);
        int fst, mid, lst;
        fst = 0;
        lst = a - 1;
        while(fst <= lst)
        {
            mid = (fst + lst) / 2;
            if(strcmp(que.c_str(), list1[mid].c_str()) > 0) fst = mid + 1;
            else if(strcmp(que.c_str(), list1[mid].c_str()) < 0) lst = mid - 1;
            else break;
        }

        cout << list2[mid] << endl;
    }
    return 0;
}
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

int top = -1;
int front = -1;

string *Distinct(string clt[], int max, string Queue[]);
void push(string clt, string Queue[]);
int Dist(string *ar, int couts[]);

int main()
{
    int TC, IC;
    cin >> TC;

    for(int i=0; i<TC; i++)
    {
        string clt[30];
        string typestr[30];
        string *ar;

        top = -1;
        front = -1;

        cin >> IC;

        cin.ignore();

        for(int j=0; j<IC; j++) getline(cin, clt[j]);

        sort(clt, clt + IC);

        string Queue[30];

        ar = Distinct(clt, IC, Queue);

        front = top;

        for(int j=0; j<=top; j++)
        {
            int tmp = ar[j].find(' ');
            typestr[j] = ar[j].substr((tmp + 1), tmp - (tmp + 1));
        }

        sort(typestr, typestr + (top + 1));

        int couts[30]={0};

        cout << Dist(typestr, couts) << endl;
    }

    return 0;
}

int Dist(string *typestr, int couts[])
{
    int cnt = 0;
    int chain = 0;
    for(int i=0; i <= top; i++)
    {
        if(!i || strcmp(typestr[i].c_str(), typestr[i-1].c_str()) == 0) couts[chain]++;
        else
        {
            chain++;
            couts[chain] = 1;
        }
    }
    
    for(int i=0; i<=chain; i++)
    {
        if(!cnt) cnt = couts[i] + 1;
        else cnt *= couts[i] + 1;
    }
            
    return cnt - 1;
}

string* Distinct(string arr[], int max, string Queue[])
{
    for(int i=0; i<max; i++) push(arr[i], Queue);
    return Queue + (front + 1);
}

void push(string str, string Queue[])
{
    if(top == -1 || strcmp(Queue[top].c_str(), str.c_str()) != 0)
        Queue[++top] = str;
}
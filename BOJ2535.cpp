#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Person {
    int country;
    int number;
    int score;

    bool operator<(const Person &p)const {
        return (score > p.score);
    }
};

vector <Person> vec;

int main()
{
    int max;
    int country, number, score;
    int cuntry[100] = {0};
    int three = 0;
    cin >> max;
    for(int i=0; i<max; i++)
    {
        cin >> country >> number >> score;
        vec.push_back({country, number, score});
    }

    sort(vec.begin(), vec.end());

    for(int i=0; three != 3; i++)
    {
        if(cuntry[vec[i].country] == 2) continue;
        else
        {
            three++;
            cuntry[vec[i].country]++;
            cout << vec[i].country << ' ' << vec[i].number << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int T;

    cin >> T;

    for(int i=0; i<T; i++)
    {
        string str;
        int sizing;

        cin >> str >> sizing;

        string chr;

        cin >> chr;

        vector<int> item;

        int setnum = 0;

        if(strcmp(chr.c_str(), "[]"))
        {
            for(int i=1; i<chr.length() - 1; i++)
            {
                if(chr[i] == ',')
                {
                    item.push_back(setnum);
                    setnum = 0;
                }
                else setnum = setnum * 10 + chr[i] - '0';
            }
            item.push_back(setnum);
        }

        int RC = 0;
        int is_error = 0;
        int isize = item.size();
        int strleng = str.length();

        int starting = 0;
        int ending = isize;

        for(int i=0; i<strleng; i++)
        {
            if(str[i] == 'D')
            {
                if(isize == 0)
                {
                    is_error = 1;
                    cout << "error" << endl;
                    break;
                }
                if(RC % 2 == 0) starting++;
                else ending--;
                isize--;
            }
            else RC++;
        }

        if(is_error) continue;

        if(RC % 2)
        {
            int temp = starting;
            starting = ending - 1;
            ending = temp;
        }

        cout << "[";
        for(int i=starting; RC % 2 ? i>=ending : i<ending; RC % 2 ? i-- : i++)
        {
            if(RC % 2 && i == ending || RC % 2 == 0 && i == ending - 1)
            {
                cout << item[i];
            }
            else cout << item[i] << ',';
        }
        cout << "]" << endl;
    }

    return 0;
}
#include <algorithm>
#include <iostream>
#include <string.h>
#include <string>
#include <cmath>

using namespace std;

typedef struct Alpha_Val {
    int value[60] = {};
    int alpha = -1;

    bool operator<(const Alpha_Val &a)const {
        for(int i=59; i>=0; i--)
        {
            if(value[i] == a.value[i]) continue;
            return value[i] > a.value[i];
        }
        return false;
    }
} Alpha_Val;

string alpha = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main()
{
    int word_count;

    cin >> word_count;

    string word[50] = {};

    int maxlength = 0;

    for(int i=0; i<word_count; i++)
    {
        cin >> word[i];

        while(word[i][0] == '0' && word[i].length() != 1)
            word[i] = word[i].substr(1);

        maxlength = max((int)word[i].length(), maxlength);
    }

    for(int i=0; i<word_count; i++)
        while((int)word[i].length() < maxlength)
            word[i] = "a" + word[i];

    Alpha_Val alpha_val[36];

    for(int i=0; i<word_count; i++)
        for(int j=maxlength; j>=0; j--)
        {
            int val, alpha_index = 0;

            if(word[i][j] >= 'A' && word[i][j] <= 'Z')
                alpha_index = word[i][j] - 'A' + 10;
            else if(word[i][j] >= '0' && word[i][j] <= '9')
                alpha_index = word[i][j] - '0';
            else continue;

            val = 35 - alpha_index;

            alpha_val[alpha_index].value[maxlength - j] += val;
            alpha_val[alpha_index].alpha = alpha_index;
        }

    for(int i=0; i<36; i++)
        for(int j=0; j<50; j++)
        {
            int val = alpha_val[i].value[j];

            alpha_val[i].value[j+1] += val / 36;
            alpha_val[i].value[j] = val % 36;
        }

    sort(alpha_val, alpha_val+36);

    int put_count;

    cin >> put_count;

    for(int k=0; k<put_count; k++)
        for(int i=0; i<word_count; i++)
            for(int j=0; j<maxlength; j++)
                if(word[i][j] == alpha[alpha_val[k].alpha])
                    word[i][j] = 'Z';

    int ceil = 0;

    string result = "";

    for(int i=maxlength-1; i>=0; i--)
    {
        int val = 0;

        for(int j=0; j<word_count; j++)
        {
            int alpha_index = 0;

            if(word[j][i] >= 'A' && word[j][i] <= 'Z')
                alpha_index = word[j][i] - 'A' + 10;
            else if(word[j][i] >= '0' && word[j][i] <= '9')
                alpha_index = word[j][i] - '0';
            else continue;

            val += alpha_index;
        }
        
        result = alpha[(val + ceil) % 36] + result;
        ceil = (val + ceil) / 36;
    }

    while(ceil != 0)
    {
        result = alpha[ceil % 36] + result;
        ceil /= 36;
    }

    cout << result;

    return 0;
}
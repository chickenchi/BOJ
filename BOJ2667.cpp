#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[25][25];
int mapSize;
int registered[25][25];
int number = 0;
int roomCnt[625];

void dfs(int i, int j);

int main()
{
    cin >> mapSize;

    for (int i = 0; i < mapSize; i++)
    {
        for (int j = 0; j < mapSize; j++)
        {
            scanf("%1d", &arr[i][j]);
        }
    }

    for (int i = 0; i < mapSize; i++)
    {
        for (int j = 0; j < mapSize; j++)
        {
            if (arr[i][j] && !registered[i][j])
            {
                number++;
                dfs(i, j);
            }
        }
    }

    cout << number << endl;

    for (int i = 0; i < mapSize; i++)
    {
        for (int j = 0; j < mapSize; j++)
        {
            if (registered[i][j])
                roomCnt[registered[i][j]]++;
        }
    }

    sort(roomCnt, roomCnt + number + 1);

    for (int i = 1; i <= number; i++)
    {
        cout << roomCnt[i] << endl;
    }

    return 0;
}

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};

void dfs(int i, int j)
{
    registered[i][j] = number;

    for (int dir = 0; dir < 4; dir++)
    {
        if (i + dx[dir] >= 0 && i + dx[dir] < mapSize &&
            j + dy[dir] >= 0 && j + dy[dir] < mapSize &&
            !registered[i + dx[dir]][j + dy[dir]] && arr[i + dx[dir]][j + dy[dir]])
            dfs(i + dx[dir], j + dy[dir]);
    }
}
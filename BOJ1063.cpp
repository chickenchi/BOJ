#include <iostream>

using namespace std;

int arr[9][9];

string moveType[8] = {"R", "L", "B", "T", "RT", "LT", "RB", "LB"};
int moveX[8] = {1, -1, 0, 0, 1, -1, 1, -1};
int moveY[8] = {0, 0, -1, 1, 1, 1, -1, -1};

int main()
{
	string king, stone;
	int move;

	cin >> king >> stone >> move;

	for(int i=0; i<move; i++)
	{
		string moveDirection;

		cin >> moveDirection;

		for(int i=0; i<8; i++)
		{
			if(moveDirection == moveType[i])
			{
				if(king[0] + moveX[i] >= 'A' && king[0] + moveX[i] <= 'H' &&
				   king[1] + moveY[i] >= '1' && king[1] + moveY[i] <= '8') 
				{
					king[0] += moveX[i];
					king[1] += moveY[i];
				}
				if(king[0] == stone[0] && king[1] == stone[1])
				{
					if(stone[0] + moveX[i] >= 'A' && stone[0] + moveX[i] <= 'H' &&
					   stone[1] + moveY[i] >= '1' && stone[1] + moveY[i] <= '8') 
					{
						stone[0] += moveX[i];
						stone[1] += moveY[i];
					}
					else
					{
						king[0] -= moveX[i];
						king[1] -= moveY[i];
					}
				}
				break;
			}
		}
	}

	cout << king << endl << stone;

	return 0;
}
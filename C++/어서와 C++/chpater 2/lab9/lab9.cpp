#include <iostream>
#include <time.h>

using namespace std;

int main(void)
{
	int board[10][10] = {0};

	
	int x, y, chk = 0;

	while (chk < 30)
	{
		x = rand() % 10;
		y = rand() % 10;
		board[x - 1][y - 1] = 1;
		if (board[x - 1][y - 1] == 1)continue;
		chk++;
	}
	for (int i=0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (board[i][j] == 1)
			{
				cout << "# ";
			}
			else
			{
				cout << ". ";
			}
		}
		cout << endl;
	}
	


	return 0;
}
#include <iostream>
#include <ctype.h>
#include <Windows.h>

using namespace std;

int main(void)
{
	char board[3][3] = {};
	int x, y;

	for (int i = 0; i < 9; i++)
	{
	
		cout << "(x, y) 좌표 : ";
		cin >> x >> y;
		
		if (x > 3 || y > 3)
		{
			system("cls");
			cout << "잘못된 입력" << endl;
			cout << "---|---|---" << endl << " " << board[0][0] << "   " << board[0][1] << "   " << board[0][2] << endl;
			cout << "---|---|---" << endl << " " << board[1][0] << "   " << board[1][1] << "   " << board[1][2] << endl;
			cout << "---|---|---" << endl << " " << board[2][0] << "   " << board[2][1] << "   " << board[2][2] << endl;
			i--;
			continue;
		}
		
		if (i % 2 == 0)
		{
			board[x-1][y-1] = 'O';
		}
		else
		{
			board[x-1][y-1] = 'X';
		}
		
		system("cls");

		cout << "---|---|---" << endl << " " << board[0][0] << "   " << board[0][1] << "   " << board[0][2] << endl;
		cout << "---|---|---" << endl << " " << board[1][0] << "   " << board[1][1] << "   " << board[1][2] << endl;
		cout << "---|---|---" << endl << " " << board[2][0] << "   " << board[2][1] << "   " << board[2][2] << endl;
	}
	

	return 0;
}
#include <iostream>
#include <time.h>
using namespace std;

int main(void)
{
	srand(time(NULL));

	int money = 50, bet = 0, win = 0;
	
	cout << "�ʱ� �ݾ� : $50" << endl << "��ǥ �ݾ� : $250" << endl;

	while (1)
	{
		if ((double)rand() / RAND_MAX < 0.5)
		{
			money++;
			bet++;
			win++;
		}
		else
		{
			money--;
			bet++;
		}
		if (money == 0 || money == 250)break;

	}
	if (money == 0)
	{
		cout << "�����͸�" << endl << endl;
	}
	else if (money == 250)
	{
		cout << "������" << endl << endl;
	}
	cout << bet << " �� " << win << "���� �¸�" << endl << "�·� : " << (double)win / (double)bet*100.0 << "%" << endl;



	return 0;
}
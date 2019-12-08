#include <iostream>
#include <time.h>
using namespace std;

int main(void)
{
	srand(time(NULL));

	int money = 50, bet = 0, win = 0;
	
	cout << "ÃÊ±â ±Ý¾× : $50" << endl << "¸ñÇ¥ ±Ý¾× : $250" << endl;

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
		cout << "ºóÅÐÅÍ¸®" << endl << endl;
	}
	else if (money == 250)
	{
		cout << "¼º°øÀû" << endl << endl;
	}
	cout << bet << " Áß " << win << "¹øÀÇ ½Â¸®" << endl << "½Â·ü : " << (double)win / (double)bet*100.0 << "%" << endl;



	return 0;
}
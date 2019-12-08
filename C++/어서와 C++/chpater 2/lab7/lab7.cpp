#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
	srand(time(NULL));

	int list[10];
	int max;

	for (int &a : list)
	{
		a = rand() % 100 + 1;
		cout << a << " ";
	}

	cout << endl;
	max = list[0];

	for (int &a : list)
	{
		if (a > max)
		{
			max = a;
		}
	}

	cout << "ÃÖ´ñ°ª : " << max << endl;

	return 0;
}
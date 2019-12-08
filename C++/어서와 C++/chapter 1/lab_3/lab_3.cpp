#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void)
{
	srand(time(NULL));

	int d1 = (rand() % 6) + 1;
	int d2 = (rand() % 6) + 1;
	cout << "두 주사위의 합 = " << d1 + d2;

	return 0;
}
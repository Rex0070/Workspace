#include <iostream>
using namespace std;

int main(void)
{
	for (double i = 0; i <= 60; i += 10)
	{
		cout << i << "	" << (i - 32.0)*5.0/9.0 << endl;
	}


	return 0;
}
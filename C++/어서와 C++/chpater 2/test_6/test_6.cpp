#include <iostream>
using namespace std;

int main(void)
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 1; j <= i+1; j++)
		{
			cout << j << " ";
		}
		for (int j = 7-i; j >1; j--)
		{
			cout <<"* ";
		}
		cout << endl;
	}

	return 0;
}
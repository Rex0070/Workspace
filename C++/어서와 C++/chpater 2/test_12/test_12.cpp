#include <iostream>
using namespace std;

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			cout << "�ڼ� ";
		}
		else
		{
			cout << i << " ";
		}
	}
	
	return 0;
}
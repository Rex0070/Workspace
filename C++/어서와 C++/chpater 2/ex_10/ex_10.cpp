#include <iostream>

using namespace std;

int main(void)
{
	int i = 0;
	do
	{
		i++;
		cout << "continue ���� ���� �ִ� ���� " << endl;
		continue;
		cout << "continue ���� �ڿ� �ִ� ���� " << endl;
	} while (i < 3);

	return 0;
}
#include <iostream>
using namespace std;

int main(void)
{
	int input, sum = 0;

	do
	{
		cout << "������ �Է��Ͻÿ� : ";
		cin >> input;
		sum += input;
	} while (input != 0);
	cout << "�� �հ� : " << sum << endl;

	return 0;
}
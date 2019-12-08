#include <iostream>
using namespace std;

int main(void)
{
	int input, sum = 0;

	do
	{
		cout << "정수를 입력하시오 : ";
		cin >> input;
		sum += input;
	} while (input != 0);
	cout << "총 합계 : " << sum << endl;

	return 0;
}
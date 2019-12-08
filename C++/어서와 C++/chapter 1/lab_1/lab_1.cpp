#include <iostream>

using namespace std;

int main(void)
{
	int money;
	int candy;

	cout << "내가 가지고 있는 돈 : ";
	cin >> money;
	cout << "캔디의 가격 : ";
	cin >> candy;
	cout << "최대로 살 수 있는 캔디의 수 = " << money / candy << endl << "캔디 구입 후 남은 돈 = " << money%candy << endl;


	return 0;
}
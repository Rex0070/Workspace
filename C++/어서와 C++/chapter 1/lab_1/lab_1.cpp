#include <iostream>

using namespace std;

int main(void)
{
	int money;
	int candy;

	cout << "���� ������ �ִ� �� : ";
	cin >> money;
	cout << "ĵ���� ���� : ";
	cin >> candy;
	cout << "�ִ�� �� �� �ִ� ĵ���� �� = " << money / candy << endl << "ĵ�� ���� �� ���� �� = " << money%candy << endl;


	return 0;
}
#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int st1, st2;

	cout << "ù ��° �� : ";
	cin >> st1;
	cout << "�� ��° �� : ";
	cin >> st2;

	cout << endl << "���� ���� : " << sqrt(st1*st1 + st2*st2) << endl;

	return 0;
}
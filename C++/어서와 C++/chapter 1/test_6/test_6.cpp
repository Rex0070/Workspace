#include <iostream>

using namespace std;

int main(void)
{
	int h, m, s;
	cout << "�� : ";
	cin >> h;
	cout << "�� : ";
	cin >> m;
	cout << "�� : ";
	cin >> s;

	cout << "���� �� : " << 3600 * h + 60 * m + s << endl;

	return 0;
}
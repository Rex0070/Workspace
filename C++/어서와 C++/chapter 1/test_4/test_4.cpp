#include <iostream>

using namespace std;

int main(void)
{
	int len, wid, hei;

	cout << "���� : ";
	cin >> len;
	cout << "�ʺ� : ";
	cin >> wid;
	cout << "���� : ";
	cin >> hei;

	int res = 2 * (len*hei) + 2*(hei*wid) + 2*(wid*len);

	cout << endl << "������ ���� : " << len*hei*wid << "������ ǥ���� : " << res<< endl;

	return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s1, s2;

	cout << "ù ��° ���ڿ� : ";
	cin >> s1;
	cout << "�� ��° ���ڿ� : ";
	cin >> s2;

	if (s1 != s2)
	{
		cout << "�� ���ڿ��� ���� �ٸ��ϴ�" << endl;
	}
	else
	{
		cout << "�� ���ڿ��� ���� �����ϴ�" << endl;
	}

	return 0;
}
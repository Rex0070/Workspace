#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string pw, PW;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> pw;
	cout << "�� ��ȣ�� �ٽ� �Է��ϼ���>>";
	cin >> PW;
	if (pw == PW)
	{
		cout << "�����ϴ�" << endl;
	}
	else
	{
		cout << "���� �ʽ��ϴ�" << endl;
	}


	return 0;
}
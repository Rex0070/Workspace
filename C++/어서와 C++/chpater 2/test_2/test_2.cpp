#include <iostream>

using namespace std;

int main(void)
{
	int sel;

	cout << "��ī �ݶ�, ��, ��������Ʈ, �ֽ�, Ŀ�� �� �ϳ��� �����ϼ��� >>";
	cin >> sel;

	switch (sel)
	{
	case 1:
		cout << "�ݶ� �����ϼ̽��ϴ�" << endl;
		break;
	case 2:
		cout << "���� �����ϼ̽��ϴ�" << endl;
		break;
	case 3:
		cout << "���̴ٸ� �����ϼ̽��ϴ�" << endl;
		break;
	case 4:
		cout << "�ֽ��� �����ϼ̽��ϴ�" << endl;
		break;
	case 5:
		cout << "Ŀ�Ǹ� �����ϼ̽��ϴ�" << endl;
		break;
	default:
		cout << "������� �����ϼ̽��ϴ� �� �ȸ����� �״´�" << endl;
		break;
	}


	return 0;
}
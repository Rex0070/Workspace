#include <iostream>
using namespace std;

int main(void)
{
	int n1, n2;
	char type;

	cout << "������ ���� : ";
	cin >> type;
	cout << "���ڸ� �Է��Ͻÿ� : ";
	cin >> n1 >> n2;
	
	switch(type)
	{
	case '+':
		cout << "����� ��� : " << n1 + n2 << endl;
		break;
	case '-':
		cout << "����� ��� : " << n1 - n2 << endl;
		break;
	case '/':
		cout << "����� ��� : " << n1 / n2 << endl;
		break;
	case '*':
		cout << "����� ��� : " << n1 * n2 << endl;
		break;
	default:
		cout << "�߸��� �Է��Դϴ�" << endl;
		break;
	}


	return 0;
}
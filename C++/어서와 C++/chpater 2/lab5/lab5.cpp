#include <iostream>

using namespace std;

int main(void)
{
	int sel,s1,s2;

	while (1)
	{
		cout << "������ �����Ͻÿ� (1, 2, 3) : ";
		cin >> sel;

		switch (sel)
		{
		case 1:
			cout << "���� : ";
			cin >> s1;
			cout << "���� : ";
			cin >> s2;
			cout << "���� : " << s1*s2 << endl;
			break;

		case 2:
			cout << "������ : ";
			cin >> s1;
			cout << "���� : " << s1*s1*3.14 << endl;
			break;

		case 3:
			cout << "�غ� : ";
			cin >> s1;
			cout << "���� : ";
			cin >> s2;
			cout << "���� : " << s1*s2*0.5 << endl;
			break;
		default:
			cout << "1, 2, 3 ������ ���� �� �ϳ��� �������ּ��� " << endl;
			continue;

		}
		break;
	}
	


	return 0;
}
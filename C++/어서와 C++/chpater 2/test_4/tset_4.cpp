#include <iostream>
using namespace std;

int main(void)
{
	int sel, stc = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "5�� �Է��Ͻÿ�" << endl;
		cin >> sel;
		if (sel == 5)
		{
			for (i = 0; i < 10000; i++)
			{
				cout << "���� ����";
			}
		}
		else
		{
			stc++;
			if (stc >= 5)
			{
				cout << "���� 5�� �� �Է��ϳ� �ѽ��ϴ� �ѽ���" << endl;
				return 0;
			}
			else
			{
				continue;
			}
		}

	}

}
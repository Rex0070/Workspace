#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
	srand(time(NULL));

	int x = rand() % 100;
	int y = rand() % 100;
	int ans = x + y;
	int res;
	int stc = 0;

	cout << "���� ������ Ǫ�� ��� ���� ���α׷�"<<endl;

	while (1)
	{
		cout << x << " + " << y << " = ";
		cin >> res;

		if (res == ans)
		{
			cout << "�����Դϴ�" << endl;
			break;
		}
		else
		{
			cout << "Ʋ�Ƚ��ϴ� �ٽ� Ǫ����" << endl;
			stc++;
			if (stc == 7)
			{
				cout << "���� ������� �׸� �ض� �׳� �λ� �����" << endl;
				break;
			}
			continue;
		}
	}

	return 0;
}
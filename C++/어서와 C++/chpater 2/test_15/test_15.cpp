#include <iostream>
#include <time.h>
using namespace std;

int main(void)
{
	srand(time(NULL));
	int sel, com = rand() % 3+1;

	cout << "���� ���� �� �� �ϳ��� �����Ͻÿ�(1, 2, 3) : ";
	cin >> sel;

	if (sel==com)
	{
		cout << "��ǻ�� : " << com << endl << "�����ϴ�" << endl;
	}
	else if (sel == 1 && com == 3 || sel == 2 && com == 1 || sel == 3 && com == 2)
	{
		cout << "��ǻ�� : " << com << endl << "�̰���ϴ�" << endl;
	}
	else
	{
		cout << "��ǻ�� : " << com << endl << "�����ϴ�" << endl;
	}
	
	return 0;
}
#include <iostream>
#include <time.h>

using namespace std;

int main(void)
{ 
	srand(time(NULL));

	int ans = rand() % 100;
	int gue;
	int tri = 0;

	while (1)
	{
		cout << "������ ������ ���ÿ� : ";
		cin >> gue;
		tri++;
		if (gue > ans)
		{
			cout << "������ ������ �����ϴ�" << endl;
		}
		else if (gue < ans)
		{
			cout << "������ ������ �����ϴ�" << endl;
		}
		else
		{
			break;
		}
	}
	cout << "�����մϴ�. ������ ���߼̽��ϴ�" << endl;
	cout << "�õ� Ƚ�� : " << tri << endl;

	return 0;
}
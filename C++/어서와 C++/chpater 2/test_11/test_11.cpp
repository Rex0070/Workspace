#include <iostream>
using namespace std;

int main(void)
{
	int n, sum = 0;

	cout << "n�� ���� �Է��Ͻÿ� : ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + i * i;
	}
	cout << "��갪�� " << sum << "�Դϴ�" << endl;

	return 0;
}
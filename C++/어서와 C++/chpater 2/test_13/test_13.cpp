#include <iostream>
using namespace std;

int main(void)
{
	int n, a = 0, b = 1, res;

	cout << "�� �ױ��� �����ٱ�? : ";
	cin >> n;

	cout << a << " " << b << " ";
	for (int i = 2; i < n; i++)
	{
		res = a + b;
		cout << res << " ";
		a = b;
		b = res;
	}
	cout << endl;

	return 0;
}
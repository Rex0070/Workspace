#include <iostream>

using namespace std;

int main(void)
{
	long fact = 1;
	int n;

	cout << "������ �Է��Ͻÿ� : ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}

	cout << n << "!�� " << fact << " �Դϴ�.\n";

	return 0;
}
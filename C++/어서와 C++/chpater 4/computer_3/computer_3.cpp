#include <iostream>
using namespace std;

class Sum
{
	int n1, n2;

public:
	int add()
	{
		return n1 + n2;
	}	
	int init(int a, int b)
	{
		n1 = a;
		n2 = b;
		return a, b;
	}
};

int main(void)
{
	Sum s;
	int n1, n2;

	cout << "ù ���� ���� : ";
	cin >> n1;
	cout << "�� ���� ���� : ";
	cin >> n2;

	s.init(n1, n2);
	cout << "������ : " << s.add() << endl;

	return 0;
}
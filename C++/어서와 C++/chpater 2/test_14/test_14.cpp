#include <iostream>
using namespace std;

int main(void)
{
	int n1, n2;
	char type;

	cout << "연산의 종류 : ";
	cin >> type;
	cout << "숫자를 입력하시오 : ";
	cin >> n1 >> n2;
	
	switch(type)
	{
	case '+':
		cout << "계산의 결과 : " << n1 + n2 << endl;
		break;
	case '-':
		cout << "계산의 결과 : " << n1 - n2 << endl;
		break;
	case '/':
		cout << "계산의 결과 : " << n1 / n2 << endl;
		break;
	case '*':
		cout << "계산의 결과 : " << n1 * n2 << endl;
		break;
	default:
		cout << "잘못된 입력입니다" << endl;
		break;
	}


	return 0;
}
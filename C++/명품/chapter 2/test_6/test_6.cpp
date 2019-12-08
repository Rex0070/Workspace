#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string pw, PW;

	cout << "새 암호를 입력하세요>>";
	cin >> pw;
	cout << "새 암호를 다시 입력하세요>>";
	cin >> PW;
	if (pw == PW)
	{
		cout << "같습니다" << endl;
	}
	else
	{
		cout << "같지 않습니다" << endl;
	}


	return 0;
}
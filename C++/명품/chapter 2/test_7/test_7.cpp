#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string pw = "yes", ip;
	 
	while (true)
	{
		cout << "���� �ϰ� �����ø� yes �� �Է��ϼ���>>";
		cin >> ip;
		if (ip == pw)break;
	}
	cout << "�����մϴ�..." << endl;

	return 0;
}
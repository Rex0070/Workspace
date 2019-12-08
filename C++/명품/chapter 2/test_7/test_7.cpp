#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string pw = "yes", ip;
	 
	while (true)
	{
		cout << "종료 하고 싶으시면 yes 를 입력하세요>>";
		cin >> ip;
		if (ip == pw)break;
	}
	cout << "종료합니다..." << endl;

	return 0;
}
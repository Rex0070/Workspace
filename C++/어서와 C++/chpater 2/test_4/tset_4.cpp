#include <iostream>
using namespace std;

int main(void)
{
	int sel, stc = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "5를 입력하시오" << endl;
		cin >> sel;
		if (sel == 5)
		{
			for (i = 0; i < 10000; i++)
			{
				cout << "낚임 ㅅㄱ";
			}
		}
		else
		{
			stc++;
			if (stc >= 5)
			{
				cout << "어휴 5를 못 입력하냐 한심하다 한심해" << endl;
				return 0;
			}
			else
			{
				continue;
			}
		}

	}

}
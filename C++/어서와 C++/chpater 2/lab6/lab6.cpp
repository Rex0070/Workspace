#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
	srand(time(NULL));

	int x = rand() % 100;
	int y = rand() % 100;
	int ans = x + y;
	int res;
	int stc = 0;

	cout << "맞출 때까지 푸는 산수 문제 프로그램"<<endl;

	while (1)
	{
		cout << x << " + " << y << " = ";
		cin >> res;

		if (res == ans)
		{
			cout << "정답입니다" << endl;
			break;
		}
		else
		{
			cout << "틀렸습니다 다시 푸세요" << endl;
			stc++;
			if (stc == 7)
			{
				cout << "어휴 띨빡색이 그만 해라 그냥 인생 접어라" << endl;
				break;
			}
			continue;
		}
	}

	return 0;
}
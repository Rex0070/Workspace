#include <iostream>
#include <time.h>

using namespace std;

int main(void)
{ 
	srand(time(NULL));

	int ans = rand() % 100;
	int gue;
	int tri = 0;

	while (1)
	{
		cout << "정답을 추측해 보시오 : ";
		cin >> gue;
		tri++;
		if (gue > ans)
		{
			cout << "제시한 정수가 높습니다" << endl;
		}
		else if (gue < ans)
		{
			cout << "제시한 정수가 낮습니다" << endl;
		}
		else
		{
			break;
		}
	}
	cout << "축하합니다. 정답을 맞추셨습니다" << endl;
	cout << "시도 횟수 : " << tri << endl;

	return 0;
}
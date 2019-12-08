#include <iostream>
#include <time.h>
using namespace std;

int main(void)
{
	srand(time(NULL));
	int sel, com = rand() % 3+1;

	cout << "가위 바위 보 중 하나를 선택하시오(1, 2, 3) : ";
	cin >> sel;

	if (sel==com)
	{
		cout << "컴퓨터 : " << com << endl << "비겼습니다" << endl;
	}
	else if (sel == 1 && com == 3 || sel == 2 && com == 1 || sel == 3 && com == 2)
	{
		cout << "컴퓨터 : " << com << endl << "이겼습니다" << endl;
	}
	else
	{
		cout << "컴퓨터 : " << com << endl << "졌습니다" << endl;
	}
	
	return 0;
}
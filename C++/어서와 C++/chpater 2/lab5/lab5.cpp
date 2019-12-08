#include <iostream>

using namespace std;

int main(void)
{
	int sel,s1,s2;

	while (1)
	{
		cout << "도형을 선택하시오 (1, 2, 3) : ";
		cin >> sel;

		switch (sel)
		{
		case 1:
			cout << "가로 : ";
			cin >> s1;
			cout << "세로 : ";
			cin >> s2;
			cout << "면적 : " << s1*s2 << endl;
			break;

		case 2:
			cout << "반지름 : ";
			cin >> s1;
			cout << "면적 : " << s1*s1*3.14 << endl;
			break;

		case 3:
			cout << "밑변 : ";
			cin >> s1;
			cout << "높이 : ";
			cin >> s2;
			cout << "면적 : " << s1*s2*0.5 << endl;
			break;
		default:
			cout << "1, 2, 3 세개의 숫자 중 하나만 선택해주세요 " << endl;
			continue;

		}
		break;
	}
	


	return 0;
}
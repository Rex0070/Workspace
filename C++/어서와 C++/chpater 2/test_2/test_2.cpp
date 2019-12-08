#include <iostream>

using namespace std;

int main(void)
{
	int sel;

	cout << "코카 콜라, 물, 스프라이트, 주스, 커피 중 하나를 선택하세요 >>";
	cin >> sel;

	switch (sel)
	{
	case 1:
		cout << "콜라를 선택하셨습니다" << endl;
		break;
	case 2:
		cout << "물을 선택하셨습니다" << endl;
		break;
	case 3:
		cout << "사이다를 선택하셨습니다" << endl;
		break;
	case 4:
		cout << "주스를 선택하셨습니다" << endl;
		break;
	case 5:
		cout << "커피를 선택하셨습니다" << endl;
		break;
	default:
		cout << "고삼차를 선택하셨습니다 다 안먹으면 죽는다" << endl;
		break;
	}


	return 0;
}
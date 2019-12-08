#include <iostream>

using namespace std;

int main(void)
{
	int len, wid, hei;

	cout << "길이 : ";
	cin >> len;
	cout << "너비 : ";
	cin >> wid;
	cout << "높이 : ";
	cin >> hei;

	int res = 2 * (len*hei) + 2*(hei*wid) + 2*(wid*len);

	cout << endl << "상자의 부피 : " << len*hei*wid << "상자의 표면적 : " << res<< endl;

	return 0;
}
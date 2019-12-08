#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int st1, st2;

	cout << "첫 번째 변 : ";
	cin >> st1;
	cout << "두 번째 변 : ";
	cin >> st2;

	cout << endl << "빗변 길이 : " << sqrt(st1*st1 + st2*st2) << endl;

	return 0;
}
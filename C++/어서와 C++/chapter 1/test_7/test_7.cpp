#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int r;
	cout << "반지름 : ";
	cin >> r;
	cout << "표면적 : " << 4 * r*r*3.14 << endl << "부피 : " << (4.0 / 3.0)*3.14*r*r << endl;
	
}
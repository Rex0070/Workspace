#include <iostream>
using namespace std;

class triangle
{

	int b, h;
public:
	void getTriangle(int len, int hei);
	int res();
};

void triangle::getTriangle(int len, int hei)
{
	b = len;
	h = hei;
}
int triangle::res()
{
	return h * b / 2;
}

int main(void)
{
	triangle tri;

	tri.getTriangle(3, 4);
	cout << "밑변이 " << tri.b << "이고 높이가 " << tri.h << "인 삼각형의 면적 : " << tri.res() << endl;

	return 0;
}
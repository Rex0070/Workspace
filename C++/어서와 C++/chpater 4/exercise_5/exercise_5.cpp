#include <iostream>
using namespace std;

class Dice
{
public:
	int face = (int)(rand() % 6 + 1);
	
};

int main(void)
{
	Dice d;

	cout << "주사위 값 = " << d.face << endl;;
	cout << "주사위 값 = " << d.face << endl;

	return 0;
}
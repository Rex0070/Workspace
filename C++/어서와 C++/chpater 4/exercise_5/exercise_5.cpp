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

	cout << "�ֻ��� �� = " << d.face << endl;;
	cout << "�ֻ��� �� = " << d.face << endl;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Computer
{
	string name;
	int Ram;
	double cpu_speed;
public:
	void setComputer(string n, int ram, double speed)
	{
		name = n;
		Ram = ram;
		cpu_speed = speed;
	}
	void print()
	{
		cout << "�̸� : " << name << endl << "Ram : " << Ram << endl << "CPU �ӵ� : " << cpu_speed << endl;
	}
};

int main(void)
{
	Computer com;

	com.setComputer("�Ｚ��Ʈ�� 9", 8, 2.1);
	com.print();

	return 0;
}
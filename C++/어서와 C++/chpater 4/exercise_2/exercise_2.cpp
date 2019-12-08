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
		cout << "ÀÌ¸§ : " << name << endl << "Ram : " << Ram << endl << "CPU ¼Óµµ : " << cpu_speed << endl;
	}
};

int main(void)
{
	Computer com;

	com.setComputer("»ï¼º³ëÆ®ºÏ 9", 8, 2.1);
	com.print();

	return 0;
}
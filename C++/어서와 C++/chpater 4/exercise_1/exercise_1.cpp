#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;

};


int main(void)
{

	Person per;
	per.name = "��ö��";
	per.age = 45;
	cout << "�̸� : " << per.name << endl << "���� : " << per.age << endl;
	


	return 0;
}
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
	per.name = "안철수";
	per.age = 45;
	cout << "이름 : " << per.name << endl << "나이 : " << per.age << endl;
	


	return 0;
}
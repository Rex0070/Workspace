#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
	string title;
	string author;
};

int main(void)
{
	Book bk;

	cout << "å �̸� : ";
	cin >> bk.title;
	cout << "å ���� : ";
	cin >> bk.author;
	cout << "(" << bk.title << "," << bk.author << ")" << endl;

	return 0;
}
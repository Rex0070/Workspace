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

	cout << "책 이름 : ";
	cin >> bk.title;
	cout << "책 저자 : ";
	cin >> bk.author;
	cout << "(" << bk.title << "," << bk.author << ")" << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main(void)
{	
	char ch;
	int nch = 0, sch = 0;

	cout << "영문자를 입력하고 Ctrl-Z를 눌러주세요" << endl;

	while(cin>>ch)
	{
		switch (ch)
		{
		case 'a' : case 'A': case 'i': case 'I': case 'e': case 'E': case 'o': case 'O': case 'u': case 'U':
			sch++; break;
		default:
			nch++; break;
		}
			
	}

	cout << "자음 : " << sch << endl;
	cout << "모음 : " << nch << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main(void)
{	
	char ch;
	int nch = 0, sch = 0;

	cout << "�����ڸ� �Է��ϰ� Ctrl-Z�� �����ּ���" << endl;

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

	cout << "���� : " << sch << endl;
	cout << "���� : " << nch << endl;

	return 0;
}
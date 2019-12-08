#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
	char name[50];
	int mx, cmax=0, ccnt = 1, chnt=0;


	cin.getline(name, 50, ';');
	mx = strlen(name);
	
	cout << "1 : ";

	for (int i = 0; i < mx; i++)
	{
		if (name[i] == ';')
		{
			ccnt++;
			cout << endl << ccnt << " : ";
			if (chnt > cmax)
			{
				cmax = chnt;

			}
		}
		cout << i;
		chnt++;
		
	}
	cout << chnt;

	return 0;
}
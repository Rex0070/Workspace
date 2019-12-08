#include <iostream>
#include <ctype.h>
#include <cstring>
using namespace std;

int main(void)
{
	int str, cnt[24] = { 0 }, cnta = 0, a = 0;
	char ch[10000];

	cin.getline(ch, 10000, ';');
	str = strlen(ch);

	for (int i = 0; i < str; i++)
	{
		if (isalpha(ch[i]))
		{ 
			cnta++;
			char c = tolower(ch[i]);
			cnt[c - 'a']++;
			
		}
	}
	cout << "¾ËÆÄºªÀÇ °¹¼ö " << cnta << endl << endl;
	 
	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << " : ";
		for (int j = 0; j < cnt[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
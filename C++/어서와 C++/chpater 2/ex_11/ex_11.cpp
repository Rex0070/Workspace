#include <iostream>

using namespace std;

int main(void)
{
	const int students = 10;
	int score[students];
	int sum = 0;
	int i, average;

	for (i = 0; i < students; i++)
	{
		cout << "�л����� ������ �Է��Ͻÿ� : ";
		cin >> score[i];
		sum += score[i];
	}

	average = sum / students;

	cout << "���� ��� : " << average << endl;


	return 0;
}
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
		cout << "학생들의 성적을 입력하시오 : ";
		cin >> score[i];
		sum += score[i];
	}

	average = sum / students;

	cout << "성적 평균 : " << average << endl;


	return 0;
}
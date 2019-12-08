#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 30000;
int N;
int arr[MAX];

int main(void)

{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cin >> N;


	for (int i = 0; i < N; i++)cin >> arr[i];

	int result = 0;

	for (int i = 0; i < N; i++)

	{
		int criteria = arr[i]; 
		int cnt = 0;

		for (int j = i + 1; j < N; j++)
			if (arr[j] > criteria)break;
			else cnt++;

		result = max(result, cnt);
	}

	cout << result << "\n";

	return 0;

}
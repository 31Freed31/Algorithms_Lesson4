#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	int maxSum = arr[0];
	int currentSum = arr[0];
	int start = 0;
	int end = 0;
	int s = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		if (currentSum < 0)
		{
			currentSum = arr[i];
			s = i;
		}
		else
		{
			currentSum += arr[i];
		}

		if (currentSum > maxSum)
		{
			maxSum = currentSum;
			start = s;
			end = i;
		}
	}

	cout << start << " " << end;
}
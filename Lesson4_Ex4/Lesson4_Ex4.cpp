#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    vector<int> arr = { -100,-50, -5, 1, 10, 15 };

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - 1 - i; j++)
        {
            int a = arr[j];
            int b = arr[j + 1];

            if (a < 0) a = abs(a);
            if (b < 0) b = abs(b);

            if (a > b)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
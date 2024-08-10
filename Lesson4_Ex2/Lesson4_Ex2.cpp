#include <iostream>
#include <vector>
using namespace std;


int main() {
    setlocale(LC_CTYPE, "rus");

    vector<int> arr = { 100, 321, 423, 4, 231 };
    int result = 235;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == result)
            {
                cout << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }

}
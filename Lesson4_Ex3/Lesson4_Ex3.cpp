#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    vector<int> arr;
    int number;

    cout << "Введите числа для массива (введите -1 для вывода пятого по возрастанию числа, -2 для завершения работы):" << endl;

    while (true) {
        cin >> number;

        if (number == -2) 
        {
            cout << "Программа завершена." << endl;
            break;
        }
        else if (number == -1)
        {
            if (arr.size() < 5) 
            {
                cout << "Недостаточно чисел для вывода пятого по возрастанию." << endl;
            }
            else {
                for (int i = 0; i < arr.size() - 1; i++) 
                {
                    for (int j = 0; j < arr.size() - 1 - i; j++) 
                    {
                        if (arr[j] > arr[j + 1]) 
                        {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                cout << "Пятое по возрастанию число: " << arr[4] << endl;
            }
        }
        else 
        {
            arr.push_back(number);
        }
    }
}
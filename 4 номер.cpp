#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int sum = 0;
    int count = 0;
    int number;
    cout << "Введите числа (0 - это выхода):" << endl;
    while (true) {
        cin >> number;
        if (number == 0) {
            break;
        }
        count++;
        sum += number;
    }
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Количество чисел:" << count << endl;
                cout << "Сумма чисел:" << sum << endl;
        cout << "Среднее арифметическое значение:" << average << endl;
    }
    else {
        cout << "Ни одно число не было введено!:" << endl;
    }
    return 0;
}

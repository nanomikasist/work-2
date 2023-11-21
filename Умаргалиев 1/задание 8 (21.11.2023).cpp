#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int number;
    int count = 0;
    int sum = 0;

    cout << "Введите числа (для завершения введите 0):" << endl;

    do {
        cout << "Введите число: ";
        cin >> number;

        // Проверяем, был ли введен 0
        if (number != 0) {
            sum += number;
            count++;
        }
    } while (number != 0);

    // Проверяем, что было введено хотя бы одно число
    if (count > 0) {
        double average = static_cast<double>(sum) / count;

        cout << "Количество введенных чисел: " << count << endl;
        cout << "Общая сумма чисел: " << sum << endl;
        cout << "Среднее арифметическое: " << average << endl;
    }
    else {
        cout << "Вы не ввели ни одного числа." << endl;
    }

    return 0;
}
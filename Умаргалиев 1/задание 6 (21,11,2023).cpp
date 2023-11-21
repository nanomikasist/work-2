#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(0, "");
    // Пример массива чисел
     vector<int> numbers = { 71, -32, 45, 98, -28, -70, -16, 97, 79, -79, 4, 41, -33, 42, 5, 46, 16, 92, 64, 27 };

    // Вывод положительных чисел
     cout << "Положительные числа: ";
    for (int number : numbers) {
        if (number > 0) {
             cout << number << " ";
        }
    }
     cout <<  endl;

    // Вывод отрицательных чисел
     cout << "Отрицательные числа: ";
    for (int number : numbers) {
        if (number < 0) {
             cout << number << " ";
        }
    }
     cout <<  endl;

    return 0;
}
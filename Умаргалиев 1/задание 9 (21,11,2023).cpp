#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int height;

    // Ввод высоты от пользователя
    cout << "Введите высоту треугольника и трапеции: ";
    cin >> height;

    // Рисование равнобедренного треугольника
    cout << "Равнобедренный треугольник:" << endl;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i - 1; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Рисование равнобедренной трапеции
    cout << "Равнобедренная трапеция:" << endl;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i - 1; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 3; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
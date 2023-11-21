#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int n;

    cout << "Введите размер массива: ";
    cin >> n;

    int arr[3];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Содержимое массива:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        }
    }

    cout << "Количество чисел в массиве: " << n << endl;
    cout << "Сумма элементов массива, кратных 3: " << sum << endl;
    cout << "Количество элементов массива, кратных 3: " << count << endl;

    return 0;
}
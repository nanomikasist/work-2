#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    long long result = 1; // Используем long long, чтобы избежать переполнения

    for (int i = 2; i <= 10; ++i) {
        int sum = 0;

        // Вычисляем сумму (1+2+...+i)
        for (int j = 1; j <= i; ++j) {
            sum += j;
        }

        // Умножаем результат на текущую сумму
        result *= sum;
    }

    cout << "Результат вычислений: " << result << endl;

    return 0;
}
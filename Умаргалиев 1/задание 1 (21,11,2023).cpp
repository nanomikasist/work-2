#include <iostream> 
    using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    const int max = 10;
    int massive[max];
    printf("Введите последовательность из 10 целых чисел: ");
    for (int i = 0; i < max; ++i)
        cin >> massive[i];
    int little = massive[0];
    for (int i = 1; i < max; ++i) {
        if (massive[i] < little)
            little = massive[i];
    }
    int count = 0;
    for (int i = 0; i < max; ++i) {
        if (massive[i] == little)
            count++;
    }
    printf("Наименьшее введённое число: %i\nВстретилось: %i раз", little, count);
    return 0;
}
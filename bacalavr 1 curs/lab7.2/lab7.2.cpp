// Тиунов Роман РИС-26-3б Вариант 22 7.2

#include <iostream>
#include <cstdarg>

using namespace std;

// Первый параметр k — количество сторон
double square(int k, ...) {
    va_list args;
    va_start(args, k);

    double sum = 0;
    for (int i = 0; i < k; i++) {
        sum += va_arg(args, double); // суммируем все переданные стороны
    }
    
    va_end(args);
    return sum; // возвращаем сумму (или условную площадь/периметр)
}

int main() {
    setlocale(LC_ALL, ".UTF8");

    // Вызов 1: 3 параметра
    cout << "результат для 3 параметров: " << square(3, 3.0, 4.0, 5.0) << endl;

    // Вызов 2: 5 параметров
    cout << "результат для 5 параметров: " << square(5, 2.0, 2.0, 2.0, 2.0, 2.0) << endl;

    // Вызов 3: 8 параметров
    cout << "результат для 8 параметров: " << square(8, 1.0, 2.0, 3.0, 1.0, 2.0, 3.0, 1.0, 2.0) << endl;

    return 0;
}з
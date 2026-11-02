// Тиунов Роман РИС-26-3б Вариант 22 Лабораторная 3
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // задаем границы диапазона, шаг и параметры точности
    double a = 0.1, b = 1.0;
    int k = 10;
    double h = (b - a) / k; // вычисление шага/ h = (1.0 - 0.1) / 10 = 0.09
    int n_fixed = 35;       // фиксированное количество слагаемых для первого случая
    double eps = 0.0001;    // заданная точность для второго случая

    // цикл по всему диапазону аргумента x с шагом h
    for (double x = a; x <= b + 1e-9; x += h) { // +1e-9 погрешность.\
        // Точное значение функции для сравнения
        double y_exact = (1.0 - (x * x) / 2.0) * cos(x) - (x / 2.0) * sin(x);

        // Вычисление суммы SN по заданному n (35 слагаемых)
        double SN = 0;
        for (int i = 0; i <= n_fixed; i++) {
            double fact = 1;
            for (int j = 1; j <= 2 * i; j++) fact *= j; // факториал (2i)!
            SN += pow(-1, i) * (2.0 * i * i + 1.0) / fact * pow(x, 2 * i);
        }

        // вычисление суммы SE по заданной точности eps
        double SE = 0;
        int i = 0;
        while (true) {
            double fact = 1;
            for (int j = 1; j <= 2 * i; j++) fact *= j;
            double term = pow(-1, i) * (2.0 * i * i + 1.0) / fact * pow(x, 2 * i);
            
            // если модуль очередного слагаемого меньше эпсилон — прерываем цикл
            if (abs(term) < eps && i > 0) break;
            SE += term;
            i++;
            if (i > 200) break; // защита от зацикливания
        }

        
        cout << "X = " << x << "  SN = " << SN << "  SE = " << SE << " Y = " << y_exact << endl;
    }

    return 0;
}
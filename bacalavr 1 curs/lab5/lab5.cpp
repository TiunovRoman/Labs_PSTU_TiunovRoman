// Тиунов Роман РИС-26-3б Вариант 22
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");
    
    int a[100][100];
    int n;

    cout << "Введите размер матрицы n: ";
    cin >> n;

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Считаем среднее для первого столбца
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][0];
    }
    double avg = sum / n;
    cout << "среднее 1-го столбца: " << avg << endl;

    // Проверяем остальные столбцы
    for (int j = 1; j < n; j++) {
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i][j] > avg) {
                count++;
            }
        }
        
        cout << "В столбце " << j + 1 << " элементов больше среднего: " << count << endl;
        
        // Считаем среднее текущего столбца для следующей итерации
        sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i][j];
        }
        avg = sum / n;
    }

    return 0;
}
// Тиунов Роман РИС-26-3б Вариант 22
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// а)
int process(int n, int a[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

// б) 
int process(string str) {
    stringstream ss(str);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

int main() {
    setlocale(LC_ALL, ".UTF8");

    // Проверка части а)
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    cout << "кол-во нечетных элементов в массиве: " << process(n, arr) << endl;

    // Проверка части б)
    string text = "всем привет!";
    cout << "Количество слов в строке: " << process(text) << endl;

    return 0;
}
// Тиунов Роман РИС-26-3б Вариант 22 
#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");
    const int N = 100;
    int a[N];
    int size = 0;
    int action;

    cout << "1 - добавить элемент\n2 - удалить элемент\n0 - выход"<<endl;

    while (true) {
        cout << "выберите действие (1,2,0): "<<endl;
        cin >> action;
        if (action == 0) {
            break;
        }
        if (action == 1) {
            if (size < N) {
                cout << "введите значение: ";
                cin >> a[size];
                size++; // увеличиваем реальную длину массиваз
            } else {
                cout << "переполнение массива!"<<endl;
            }
        } 
        else if (action == 2) {
            if (size > 0) {
                size--; // удаляем последний эллемент
                cout << "верхний элемент удален."<<endl;
            } else {
                cout << "массив пуст"<<endl;
            }
        }

        // вывод массива после каждой операции 
        cout <<"текущий массив:[";
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout <<"]"<<endl;
        
    }

    return 0;
}
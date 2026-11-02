
#include <iostream> // подключаем библиотеку ввода-вывода
#include <clocale> //  подключаем библиотеку для локализации
using namespace std; // подключаем пространство имен std

//1 zadanie
// int main()
// {
// int a = 10;
// int b = 20;
// int& r = a;
// r = b;
// r++;
// cout<<a<<" " <<b;
// return 0; 
// }
//вывод 20 21. через ссылку r меняется a. благодаря int& r = a


//2 zadanie
// int main(){
//     int a = 12;
//     int* ptr = &a;
//     int copy = *ptr;
//     (*ptr)++;
//     cout<<a<<" "<<copy;
//     return 0;
//}
//вывод 13 12
//copy - самостоятельная переменная если а изменится, то copy нет
//*ptr - ссылка, любое изменение через *ptr меняет саму переменную a


//3 zadanie
// int main(){
//     int a = 4, b = 9;
//     int*p = &a;
//     int*q = p;
//     int&r = *p;
//     p = &b;
//     *q += *p;
//     *p = r-3;
//     q = p;
//     *q += r;
//     cout<<a<<" " <<b<<" "<<r; 
// return 0;
// }
//вывод: 13 23 13
//в конце программы и p и q указывают на переменную b
//r обозначает переменную a


//4 zadanie
// int main(){
//     int a = 5, b = 8;
//     int&r = a;
//     int&s = a;
//     int copy = a;
//     r = b;
//     s += 2;
//     b = copy;
//     cout<<a<<" "<<b<<" "<<r<<" "<<s<<" "<< copy;
//     return 0;
// }
//вывод: 10 5 10 10 5
//при изменении r и s copy не меняется. т. он самостоятельная переменная

//5 zadanie
int main(){
    int a = 2, b = 5, c = 8;
    int* p = &a;
    int&r = a;
    int copy = *p;
    *p = b;
    p = &c;
    r = *p;
    *p = b + copy;
    p = &b;
    *p = r - copy;
    r++;
    cout <<a<<" "<<b<<" "<<c<<" "<<copy;
    return 0;
}
//9 6 7 2
//в конце p указывает на переменную b
//r - ссылка которая на протяжении всей программы неизменно привязана к переменной a.
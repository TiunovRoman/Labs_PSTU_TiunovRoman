// Тиунов Роман РИС-26-3б Вариант 22 
#include <iostream>
#include <string>
#include <clocale>
#include <windows.h>

using namespace std;

string translate(string s){
    string res = "";
    for (char c : s){
        if (c == 'A' || c == 'a') res += "А";
        else if (c == 'B' || c == 'b') res += "Б";
        else if (c == 'C' || c == 'c') res += "К";
        else if (c == 'D' || c == 'd') res += "Д";
        else if (c == 'E' || c == 'e') res += "Э";
        else if (c == 'F' || c == 'f') res += "Ф";
        else if (c == 'G' || c == 'g') res += "Г";
        else if (c == 'H' || c == 'h') res += "Х";
        else if (c == 'I' || c == 'i') res += "И";
        else if (c == 'J' || c == 'j') res += "ДЖ";
        else if (c == 'K' || c == 'k') res += "К";
        else if (c == 'L' || c == 'l') res += "Л";
        else if (c == 'M' || c == 'm') res += "М";
        else if (c == 'N' || c == 'n') res += "Н";
        else if (c == 'O' || c == 'o') res += "ОУ";
        else if (c == 'P' || c == 'p') res += "П";
        else if (c == 'Q' || c == 'q') res += "КЬЮ";
        else if (c == 'R' || c == 'r') res += "Р";
        else if (c == 'S' || c == 's') res += "С";
        else if (c == 'T' || c == 't') res += "Т";
        else if (c == 'U' || c == 'u') res += "У";
        else if (c == 'V' || c == 'v') res += "В";
        else if (c == 'W' || c == 'w') res += "В";
        else if (c == 'X' || c == 'x') res += "ЭКС";
        else if (c == 'Y' || c == 'y') res += "Й";
        else if (c == 'Z' || c == 'z') res += "З";
        else res += c; 
    }
    return res;
}

int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, ".UTF8");

    string s;
    cout << "Введите предложение на английском языке (слова через _):" << endl;
    getline(cin, s);
    
    string final_sentence = "";
    string current_word = "";
    
    cout << "Пословная проверка"<< endl;

    // проходим по всей введенной строке посимвольно
    for (size_t i = 0; i <= s.length(); i++) {
        // если дошли до конца строки или до символа подчеркивания '_'
        if (i == s.length() || s[i] == '_') {
            if (!current_word.empty()) {
                string auto_tr = translate(current_word);
                
                cout << current_word << " \t-> \t\"" << auto_tr << "\"" << endl;
                cout << "Согласны? (enter — да, или введите свой вариант): ";
                
                string choice;
                getline(cin, choice);
                
                string chosen_word = "";
                if (choice.empty()) {
                    chosen_word = auto_tr; // если просто нажали Enter
                } else {
                    chosen_word = choice;  // если ввели свой вариант
                }
                
                // собираем итоговое предложение через пробел
                if (final_sentence == "") {
                    final_sentence = chosen_word;
                } else {
                    final_sentence += " " + chosen_word;
                }
                
                current_word = ""; // сбрасываем для следующего слова
            }
        } else {
            current_word += s[i]; // копим буквы текущего слова
        }
    }
    
    cout << "итоговая строка: " << final_sentence << endl;

    return 0;
}
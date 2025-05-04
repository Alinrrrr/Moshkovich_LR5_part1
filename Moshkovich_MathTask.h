#ifndef _Moshkovich_MATHTASK_H_
#define _Moshkovich_MATHTASK_H_
#include <string>
#include <iostream>
using namespace std;

//ф-я контроля вводимых данных
bool UserInput(const string& input) {
    //если строка пустая - ввод некорректен
    if (input.empty()) return false;
    for (double i = 0; i < input.length(); ++i) {
        if(!isdigit(input[i])) {
            return false;
        }
    }
    //попытаться
    try {
        int number = stoi(input);
        if (number < 0) return false;
    }
    catch (...)
    {
        return false;
    }
    return true;
}
//метод ввода данных
void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while (!UserInput(raw_input)) {
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
}
//вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
    return (NumberA * NumberB);
}
#endif

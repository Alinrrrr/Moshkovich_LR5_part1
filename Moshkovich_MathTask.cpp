#include <iostream>
#include "Moshkovich_MathTask.h"
using namespace std;
 int main()
 {
    int NumberA=0,NumberB=0;
    //ввод переменной А
    EnterDigit(NumberA, "input height A");
    //ввод переменной B
    EnterDigit(NumberB, "input height B");

    //вычисление площади прямоугольника
    int RectangleArea=CalcRectangleArea(NumberA,NumberB);
    //вывод значения площади
    cout << "Area of Restangle is " << RectangleArea << endl;
 }
#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
//подключение модуля с тестируемыми методами
#include "Moshkovich_MathTask.h"

using namespace cute;

void testCalcRectangleArea() {
    int a = 3;
    int b = 5;
    //ожидаемый результат
    int expected = 15;

    //получение значения с помощью тестируемого метода
    int actual = CalcRectangleArea(a,b);

    //сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected,actual);
}
    //тест проверяющий отсев пустых значений
void testUserUnput_Empty(){
//исходные данные
string str = "";
//
bool expected = false;
//
bool actual = UserInput(str);
//
ASSERT_EQUAL(expected,actual);
}
//тест проверяющий отсев нецифровых  символов
void testUserUnput_Letter(){
//исходные данные
string str = "a";
//
bool expected = false;
//
bool actual = UserInput(str);
//
ASSERT_EQUAL(expected,actual);
}
//тест проверяющий отсев цифро-буквенных значений
void testUserUnput_DigitLetterValue(){
//исходные данные
string str = "5a";
//
bool expected = false;
//
bool actual = UserInput(str);
//
ASSERT_EQUAL(expected,actual);
}
//тест проверяющий отсев отрицательных значений
void testUserUnput_NegativeValue(){
//исходные данные
string str = "-5";
//
bool expected = false;
//
bool actual = UserInput(str);
//
ASSERT_EQUAL(expected,actual);
}

int main() {
    /**/ //создаем тестовый набор
    suite s;

    //Добавляем тестовую функцию в набор
    s.push_back(CUTE(testCalcRectangleArea));
    s.push_back(CUTE(testUserUnput_Empty));
    s.push_back(CUTE(testUserUnput_Letter));
    s.push_back(CUTE(testUserUnput_DigitLetterValue));
    s.push_back(CUTE(testUserUnput_NegativeValue));
  
    //созддаем listener и Runner
    ide_listener<> listener;
    makeRunner(listener)(s, "Test testCalcRectangleArea");

    return 0;
}
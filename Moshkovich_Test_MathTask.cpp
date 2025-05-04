#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h""
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

int main() {
    /**/ //создаем тестовый набор
    suite s;

    //Добавляем тестовую функцию в набор
    s.push_back(CUTE(testCalcRectangleArea));
  
    //созддаем listener и Runner
    ide_listener<> listener;
    makeRunner(listener)(s, "Test testCalcRectangleArea");

    return 0;
}
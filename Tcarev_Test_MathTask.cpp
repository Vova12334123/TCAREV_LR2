#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
//Подключение модуля с тестируемыми методами.
#include "Tcarev_MathTask.h"

using namespace cute;

void testCalcRectangleArea() {
    //Входные значения.
    int a = 3;
    int b = 5;
    //Ожидаемый результат.
    int expected = 15;

    //Получение значение с помощью тестируемого метода.
    int actual = CalcRectangleArea(a, b);

    //Сравнение ожидаемого результата с полученным.
    ASSERT_EQUAL(expected, actual);
}

//Тест, проверяющий отсев пустых значений.
void testUserInput_Empty() {
    //Исходные данные.
    string str = "";

    //Ожидаемое значение результата работы функции UserInput.
    bool expected = false;

    //Получения значения с помощью тестируемого метода.
    bool actual = UserInput(str);

    //Сравнение ожидаемого результата с полученным.
    ASSERT_EQUAL(expected, actual);
}

//Тест, проверяющий отсев нецифровых символов.
void testUserInput_Letter() {
    //Исходные данные.
    string str = "a";

    //Ожидаемое значение результата работы функции UserInput.
    bool expected = false;

    //Получение значения с помощью тестируемого метода.
    bool actual = UserInput(str);

    //Сравние ожидаемого результата с полученным.
    ASSERT_EQUAL(expected, actual);
}

//Тест, проверяющий отсев отрицательных значений.
void testUserInput_NegativeValue() {
    //Исходыне данные.
    string str = "-5";

    //Ожидаемое значение результата работы функции UserInput.
    bool expected = false;

    //Получение значения с помощью тестируемого метода.
    bool actual = UserInput(str);
    
    //Сравнение ожидамего результата с полученным.
    ASSERT_EQUAL(expected, actual);
    
}

int main() {
    /**/ //Создаём тестовый набор.
    suite s;

    //Добавляем тестовые функции в набор.
    s.push_back(CUTE(testCalcRectangleArea));
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_NegativeValue));

    //Созадём listener и runner.
    ide_listener<> listener;
    makeRunner(listener)(s, "All Rectangle Tests");

    return 0;
}
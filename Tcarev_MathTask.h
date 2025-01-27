#ifndef _TCAREV_MATHTASK_H_
#define _TCAREV_MATHTASK_H_

#include <cstring>
using namespace std;

//Проверка корректности вводимых данных.
bool UserInput(string input) {
    //Если строка пустая - ввод некорректен.
    if (input.empty()) return false;
    //Попытаться.
    try {
        //Преобразование введёного значения в тип int.
        int number = stoi(input);
    }
    catch (...) //Если возникла ошибка в блоке try.
    { return false; }
    return true;
}
//Вычисления площади прямоугольника.
int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB;
}

#endif
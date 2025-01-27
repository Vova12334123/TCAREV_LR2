#include <iostream>
#include "Tcarev_MathTask.h"

using namespace std;

int main()
{
    string str_input; //Вспомогательная переменная.

    //Ввод ширины прямоугольника.
    cout << "inpute height A" << endl;
    //Ввод значения в текстовом виде.
    getline(cin, str_input);
    //Пока ввод некорректен( вводимое значение невозможно преобразовать в int)
    while (!UserInput(str_input)) {
        cout << "input height A" << endl;
        //Повторный ввод данных.
        getline(cin, str_input);
    }

    //Присвоение переменной NumberA преобразованного в тип int
    //правильно введённого текстого значения.
    int NumberA = stoi(str_input);
    //Ввод высоты прямоугольника.
    cout << "input weight B" << endl;
    getline(cin, str_input);
    while (!UserInput(str_input)) {
        cout << "input weight B" << endl;
        getline(cin, str_input);
    }
    
    //Присвоение переменной NumberB преобразованного в тип int
    //правильного введённого текстового значения.
    int NumberB = stoi(str_input);

    //Вычислене площади прямоугольника.
    int RectangleArea = CalcRectangleArea(NumberA, NumberB);
    //Вывод значение площади
    cout << "Area of Rectangle is " << RectangleArea << endl;
    return 0;
}
#include <iostream>


/* 
Для любых вводных b и с c клавиатуры решите
уравнение вида bx + c = 0
*/

int main() {
    int b, c;
    double answer;
    while (/* condition */)
    {
        /* code */
    }
    
    std::cout << "Введите b: ";
    std::cin >> b;
    std::cout << "Введите c: ";
    std::cin >> c;
    std::cout << "Для уравнения вида bx + c = 0\n";

    if (b == 0) {
        std::cout << "x = любое число";
    } else {
        answer = (float)-c / (float)b;
        std::cout << "x = " << answer;
    }
}
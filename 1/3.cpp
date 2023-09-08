#include <iostream>
#include <cmath>


/*
Решаем квадратное уравнение
*/

int main() {
    float a, b, c, x, d, x1, x2;
    std::cout << "Введите а: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;
    std::cout << "Введите c: ";
    std::cin >> c;

    // a = 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {           // с = 0 b = 0 a = 0
                std::cout << "x = любое число";
            } else {    // a = 0 b = 0 c != 0
                std::cout << "x не имеет корней";
            }
        } else {    // a = 0 b != 0
            if (b == 0) {   // a = 0 b != 0 c = 0
                std::cout << "x не имеет корней";
            } else {    // a = 0 b != 0 c != 0
                std::cout << "x = " << -c / b;
            }
        }
    }

    // b = 0
    else if (b == 0) {
        if (c == 0) {   // b = 0 c = 0
            std::cout << "x = 0";
        } else {        // b = 0
            x = (-c / a);
            if (x > 0) {
                std::cout << "x = +-" << pow(x, 0.5);
            } else if (x == 0) {
                std::cout << "x = 0";
            } else {
                std::cout << "решений нет";
            }
        }
    }

    // c = 0
    else if(c == 0) {
        std::cout << "x = 0 или x = " << -b / a;
    } else {
        d = pow(b, 2) - 4 * a * c;
    std::cout << "D: " << d << "\n";
    if (d < 0) {
        std::cout << "нет корней";
    } else if (d == 0) {
        std::cout << "x = " << -b / (2 * a);
    } else {
        x1 = (-b + pow(d, 0.5)) / (2 * a);
        x2 = ((-b - pow(d, 0.5)) / (2 * a));
        std::cout << "x = " << x1 << " или x = " << x2;
    }
    }

// c нулями покончено!!!! Теперь последние штрихи


}

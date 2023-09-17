#include <iostream>


// Разветвление
int main() {
    double x, a;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите a: ";
    std::cin >> a;
    
    // прим. Решение не расчитано на комплексные числа.

    if (abs(x) < 1) {
        if (x > 0) {
            std::cout << "answer: " << a * std::log(x);
        } else {
            std::cout << "Нет решения";
        }
    } else {
        if (a - pow(x, 2) >= 0) {
            std::cout << "answer: " << pow(a - pow(x, 2), 0.5);
        } else {
            std::cout << "Нет решения";
        }
    }
}
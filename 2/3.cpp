#include <iostream>


// Функция
int main() {
    double x, y, b, z;

    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    std::cout << "Введите b: ";
    std::cin >> b;

    if (b - y > 0 && b - x >= 0) {
        z = std::log(b - y) * pow(b - x, 0.5);
        std::cout << "z = " << z << "\n";
    } else {
        std::cout << "Нет решения";
    }
}
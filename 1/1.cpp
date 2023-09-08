#include <iostream>

int main() {
    float x, y;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    std::cout << "разность: " << x - y << "\n";
    std::cout << "сумма: " << x + y << "\n";
    std::cout << "произведение: " << x * y << "\n";
    if (y != 0) {
        std::cout << "devide: " << x / y << "\n";
    } else {
        std::cout << "Делить на 0 нельзя!\n";
    }
}
#include <iostream>


// Порядок
int main() {
    double n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    if (n == (int)n && n > 0) {
        for (int i = n; i <= n + 10; i++) {
        std::cout << i << '\n';
        }
    } else {
        std::cout << "нужно ввести натуральное число!";
    }


}
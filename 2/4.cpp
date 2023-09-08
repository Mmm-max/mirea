#include <iostream>


int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    for (int i = n; i <= n + 10; i++) {
        std::cout << i << '\n';
    }
}
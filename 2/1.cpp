#include <iostream>
#include <cmath>

// Конус
int main() {
    double R, r, l, h, s, v, p;
    p = 3.14;

    std::cout << "Введите большое основание конуса: ";
    std::cin >> R;
    std::cout << "Введите малое основание конуса: ";
    std::cin >> r;
    std::cout << "Введите высоту конуса: ";
    std::cin >> h;
    std::cout << "Введите образующую конуса: ";
    std::cin >> l;

    s = p * (pow(R, 2) + (R + r) * l + pow(r, 2));
    v = ((float)1/ 3) * p * h * (pow(R, 2) + r * R + pow(r, 2));

    std::cout << "Площадь усеч. конуса = " << s << ", а объем = "  << v << "\n";
}
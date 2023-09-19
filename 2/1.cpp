#include <iostream>
#include <cmath>

// Конус
int main() {
    double R, r, l, h, s, v, p, l_2;
    p = 3.14;

    std::cout << "Введите большое основание конуса: ";
    std::cin >> R;
    std::cout << "Введите малое основание конуса: ";
    std::cin >> r;
    std::cout << "Введите высоту конуса: ";
    std::cin >> h;
    std::cout << "Введите образующую конуса: ";
    std::cin >> l;

    l_2 = pow((pow(R - r, 2) + pow(h, 2)), 0.5);

    std::cout << "Right l:" << l_2 << "\n";

    if (l == l_2) {
        s = p * (pow(R, 2) + (R + r) * l + pow(r, 2));
        v = ((float)1/ 3) * p * h * (pow(R, 2) + r * R + pow(r, 2));

        std::cout << "Площадь усеч. конуса = " << s << ", а объем = "  << v << "\n";
    } else {
        std::cout << "Нет решения." << "\n";
    }
}
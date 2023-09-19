#include <iostream>
#include <cmath>

using namespace std;

// Заем
int main() {
    int s, n;
    double m, r;
    cout << "Введите займ (S): ";
    cin >> s;
    cout << "Введите количество лет (n): ";
    cin >> n;
    cout << "Введите процент в процентах (p): ";
    cin >> r;
    r = r / 100;

    m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
    cout << "Помесячная выплата (m) = " << m << "\n";
}
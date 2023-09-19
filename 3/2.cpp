#include <iostream>
#include <cmath>


using namespace std;


double binarySearch(int s, int n, double value) {
    double middle, m, r,
        start = 0,
        end = 100;
    bool found = false;
    while (!found && start <= end) {
        middle = (start + end) / 2;
        cout << "start: " << start << " end: " << end << " middle: " << middle <<  "\n";
        r = middle / 100;
        m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
        if (round(value * 100) / 100 ==  round(m * 100) / 100) {
            found = true;
        } else if (value > m)
        {
            start = middle;
        } else {
            end = middle;
        }
    }
    return middle;
}

int main() {
    int s, n;
    double m, r, answer;
    cout << "Введите займ (S): ";
    cin >> s;
    cout << "Введите количество лет (n): ";
    cin >> n;
    cout << "Введите ежемесячный платеж (m): ";
    cin >> m;
    answer = binarySearch(s, n, m);
    std::cout << "p = " << answer << "\n";
}
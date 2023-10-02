#include <iostream>

using namespace std;

int iter(int m, int b, int c, int s) {
    return (m * s + b) % c;
}


int main() {
    int m, b, c, count_iter, option,
    s = 0;

    m = 37, b = 3, c = 64;
    cout << "введите вариант (1 или 2): ";
    cin >> option;
    cout << "Введите количество итераций (i): ";
    cin >> count_iter;

    for (int i = 0; i < count_iter; i++) {
        s = iter(m, b, c, s);
    }
    cout << "answer: " << s << "\n";
}
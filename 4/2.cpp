#include <iostream>

using namespace std;


int sign(double x) {
    if (x > 0) {
        return 1;
    } else if (x < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    double x;
    cout << "ВВедите число: ";
    cin >> x;
    cout << "answer: " << sign(x);
}
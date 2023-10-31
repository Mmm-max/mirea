#include <iostream>
#include <string>

using namespace std;

// Алгоритм Евклида
int nod_delit(int a, int b) {
    do {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    } while (a != 0 && b != 0);
    return a + b;
}

int nod_minus(int a, int b) {
    do {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    } while (a != b);
    return a;
}

int main() {
    int a, b;
    cout << "Enter two number: ";
    cin >> a;
    cin >> b;
    
    cout << "НОД делением: " << nod_delit(a, b) << "\n";
    cout << "НОД вычитанием: " << nod_minus(a, b) << "\n";
}
#include <iostream>

using namespace std;


int main() {
    int m, n3, n4;
    n4 = m % 3;
    n3 = (m - 4 * n4) / 3;
    if (n3 >= 0) {
        cout << n3 << endl;
        cout << n4 << endl;
    } else {
        cout << 0 << endl;
        cout << 0 << endl;
    }
}
#include <iostream>


using namespace std;

int main() {
    int n;
    float a, y = 0.0f, buffer;
    cout << "enter n and a: ";
    cin >> n >> a;
    cout << "a: " << a << endl;
    cout << "n: " << n << endl;
    buffer = a;
    for (int i = 1; i <= n + 1; i++) {
        y += i / buffer;
        buffer *= a + i;
        cout << "i: " << i << endl;
    }
    cout << "y: " << y << endl;
}
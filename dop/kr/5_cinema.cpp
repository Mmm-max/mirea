#include <iostream>


using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    while (k != 1) {
        n = (n - k % 2) / 2;
        k /= 2;
    }
    cout << "answer: " << (n - 1) / 2 << " " << n / 2;
}
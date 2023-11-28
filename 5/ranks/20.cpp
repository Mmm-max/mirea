/*An array F[1:n] of numbers in the binary number system is given. Organize translation in another array
source array to quaternary number system */
#include <cmath>
#include <iostream>

using namespace std;

int binary_to_decimal(int n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}
int from_10_to_other(int number, int base) {
    int result = 0;
    int count = 0;
    while (number > 0) {
        result += number % base * pow(10, count);
        number /= base;
        count++;
    }
    // cout << result << endl;
    return result;
}
int main() {
    int n;
    cout << "Enter the n: ";
    cin >> n;
    cout << "Enter the array: ";
    int F[n];
    for (int i = 0; i < n; i++) {
        cin >> F[i];
    }
    int Q[n];
    for (int i = 0; i < n; i++) {
        Q[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        Q[i] = from_10_to_other(binary_to_decimal(F[i]), 4);
    }
    cout << "array with new base(4): ";
    for (int i = 0; i < n; i++) {
        cout << Q[i] << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int answer;
    for (size_t i = 9; i > 0; i--)
    {
        // cout << i << "\n";
        answer += factorial(i);
    }
    cout << "answer: " << answer;
    
}
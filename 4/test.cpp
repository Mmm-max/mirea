#include <iostream>

using namespace std;

int main() {
    string s = "abcd";
    for (int i = 0; i < s.length(); i++) {
        std::cout << "i: " << i << " = " << s[i] << "\n";
    }
}
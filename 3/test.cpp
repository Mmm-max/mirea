#include <iostream>
#include <string>

using namespace std;


int main() {
    string a;
    char b;
    a = "cba";
    b = a[1];
    cout << "second a: " << b;
    a[0] = b;
    cout << "a " << a;
}
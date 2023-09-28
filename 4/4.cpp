#include <iostream>

using namespace std;


int main() {
    string s1, s2, s3;
    s1 = "********";
    s2 = "------------------------------------------";
    s3 = "----------------------------------";
    for (int i = 0; i < 13; i++) {
        if (i < 6) {
            cout << s1;
            if (i % 2 == 0) {
                cout << s3;
            } else {
                cout << "";
            }
        } else {
            if (i % 2 == 0) {
                cout << s2;
                }
            }
        cout << "\n";
        }
    }

# include <iostream>
# include <string>

using namespace std;


string bubble(string s) {
    string s = "cba";
    char a, b;
    int l = s.length();

    for (int i = 0; i < (l - 1); i++) {
        for (int j = 0; j < ((l - 1) - i); j++) {
            if (s[j] > s[j + 1]) {
                a = s[j];
                b = s[j + 1];
                cout << "check! " << i << " " << j << "\n";
                // s[j], s[j + 1] = s[j + 1], s[j];
                s[j] = b;
                s[j + 1] = a;
            }
        }
    cout << "sorting... " << s << "\n";
    }
    cout << "sorted: " << s << "\n";
    return s;
}


int main() {
    // string s = "быва";
    // cout << "start\n";
    // cout << "answer " << bubble(s);

}
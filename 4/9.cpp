#include <iostream>
#include <cmath>

using namespace std;

string from_10_to_any(int num, size_t base) {
    string answer;
    string alphabet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t index; 

    while (num > 0) {
        index = num % base;
        answer = alphabet[index] + answer;
        num = num / base;
    }
    return answer;
}

int from_any_to_10(string num, size_t base) {
    int answer = 0;
    string alphabet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t index, l;
    l = num.length();

    for (int i = 0; i < l; i++) {
        index = alphabet.find(num[i]);
        answer += index * pow(base, l - 1 - i);
    }

    return answer;
}

int main() {
    string num, answer;
    size_t old_base, new_base;
    cout << "Введите число (num): ";
    cin >> num;
    cout << "Введите старую систему счисления: ";
    cin >> old_base;
    cout << "Введите новую систему счисления: ";
    cin >> new_base;

    answer = from_10_to_any(from_any_to_10(num, old_base), new_base);
    
    cout << "answer: " << answer << "\n";
}
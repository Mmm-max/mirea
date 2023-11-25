// Статистическая обработка текстового файла: поиск наиболее часто встречающегося символа.

#include <iostream>
#include <fstream>
#include <unordered_map>

using namespace std;


bool check_key(unordered_map<char, int> m, char key)
{
    // Key is not present
    if (m.find(key) == m.end())
        return false;
 
    return true;
}

void change_map(unordered_map<char, int> d, char letter) {

    // cout << 'a' << ": " << check_key(d, 'a') << '\n';
    if (check_key(d, letter)) {
        d[letter] += 1;
    } else {
        d[letter] = 1;
    }
}

int main() { 
    ifstream myFile("/Users/eugensolopov/code/cpp/mirea_homework/5/text_file/text_19.txt");
    string line, answer;
    char symbol;
    unordered_map<char, int> d;

    while (getline(myFile, line)) {
        cout << line << endl;
        for (int i = 0; i != line.length(); ++i) {
        symbol = line[i];
        // cout << "test symbol: " << symbol << endl;
        // change_map(d, symbol);
        if (check_key(d, symbol)) {
            d[symbol] += 1;
        } else {
        d[symbol] = 1;
    }
        }
    }
    cout << "length: " << d.size() << endl;
    // cout <<  "answer: " << answer << "\n";
    for (auto i = d.begin(); i != d.end(); ++i) {
        // cout << "test!";
        cout << i->first << ": " << i->second << '\n';
    }
}
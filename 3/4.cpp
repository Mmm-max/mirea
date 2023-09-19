#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {
    ifstream myFile("code/c++/mirea_homework/3/4.txt");
    string line, answer;
    char symbol;

    while (getline(myFile, line)) {
        cout << line << endl;
    }
    for (int i = 0; i != line.length(); ++i) {
        symbol = line[i];
        if (48 <= int(symbol) && (int(symbol) <= 57)) {
            answer += symbol;
        }
    }
    cout <<  "answer: " << answer << "\n";
}
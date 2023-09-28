#include <iostream>
#include <fstream>


using namespace std;


int main() {
    fstream myFile("code/c++/mirea_homework/4/1.txt");
    string s;
    int answer = 0;
    bool status;

    for (int i = 1; i < 11; i++) {
        myFile << i << "\n";
    }
    myFile.close();

    myFile.open("code/c++/mirea_homework/4/1.txt");
    while (getline (myFile, s)) {
        answer += stoi(s);
    }

    cout << "answer: " << answer << "\n";
    myFile.close();

    // status = remove("code/c++/mirea_homework/4/1.txt");
}
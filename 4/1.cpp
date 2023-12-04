#include <iostream>
#include <fstream>


using namespace std;


int main() {
    fstream myFile("/Users/eugensolopov/code/cpp/mirea_homework/4/1.txt");
    string s;
    float answer = 0;
    bool status;
    float n;

    for (int i = 1; i < 11; i++) {
        cin >> n;
        cout << "test " << i << ": " << n << "\n";
        myFile << n << "\n";
    }
    myFile.close();

    myFile.open("/Users/eugensolopov/code/cpp/mirea_homework/4/1.txt");
    while (getline (myFile, n)) {
        cout << "n: " << stoi(s) << endl;
        answer += stoi(s);
    }

    cout << "answer: " << answer << "\n";
    myFile.close();

    // status = remove("code/c++/mirea_homework/4/1.txt");
}
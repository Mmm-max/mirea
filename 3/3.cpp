#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {
    ifstream myFile("code/c++/mirea_homework/3/3.txt");
    string line;

    // cout << "start checker \n";
    // cout << myFile << "\n";
    while (getline(myFile, line)) {
        // cout << "check";
        cout << line << endl;
    }
    return 0;
}
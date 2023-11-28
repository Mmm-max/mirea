/*Create a file from natural numbers. In a file of natural numbers, find the smallest and largest
common divisors, also determine all prime numbers and their number. Store all prime numbers in
another file. Provide the ability to view the contents of all files*/

#include <cstdio>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <istream>
#include <sstream>
#include <string>

using namespace std;


bool is_prime(int a) { 
    if (a < 2)
        return false;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int gcd(int a, int b) {
    return (a == 0) ? b: gcd(b % a, a);
}

int nod(int n) {
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return i;
        } else {
            i++;
        }
    }
    return n;
}
 
int main() {
    string input_filename = "/Users/eugensolopov/code/cpp/mirea_homework/5/files/6.txt";
    int n, cnt;
    // write input file
    ofstream inputFile(input_filename, ios::out);
    if (!inputFile.is_open()) {
        std::cerr << "Не удалось открыть файл для записи: " << input_filename << std::endl;
        return 1; // Возвращаем код ошибки
    }
    cout << "enter count of natural numbers cnt: " << endl;
    cin >> cnt;
    cout << "enter natural numbers: " << endl;
    for (int i = 0; i < cnt; i++) {
        cin >> n;
        inputFile << n << endl;
    }
    inputFile.close();

    // read input file
    fstream myFile(input_filename);
    if (!myFile.is_open()) {
        cout << "Не удалось открыть файл!";
        return 1;
    }

    string textline;
    int m = 0;
    vector<int> prime_nums;

    while (myFile >> n) {
        if(is_prime(n)) {
            prime_nums.push_back(n);
        }
        m = gcd(m, n);
    }
    myFile.close();

    cout << "Наибольший общий делитель: " << m << endl;
    cout << "count prime numbers: " << prime_nums.size() << endl;
    cout << "Наименьший общий делитель: " << nod(m) << endl;
    // наименьший общий делтель
    


    // std::cout << "Считанные числа из файла:" << std::endl;
    // for (int num : prime_nums) {
    //     std::cout << num << endl;
    // }
    std::cout << std::endl;

    string outputfile_name = "/Users/eugensolopov/code/cpp/mirea_homework/5/files/6_output.txt";
    ofstream outputFile(outputfile_name, ios::out);
    if (!outputFile.is_open()) {
        std::cerr << "Не удалось открыть файл для записи: " << outputfile_name << std::endl;
        return 1; // Возвращаем код ошибки
    }
    for (int num : prime_nums) {
        outputFile << num << " ";
    }
    outputFile.close();
    return 0;
}
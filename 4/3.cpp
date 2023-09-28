#include <iostream>

using namespace std;

double rectangle(double length, double height) {
    return length * height;
}

double triangle(double a, double height) {
    return a * height / 2;
}

double circle(double radius) {
    return 3.14 * radius * radius / 2;
}


int main() {
    int figure_choice;
    cout <<  "Введите цифру. 0 - прямоугольник, 1 - треугольник, 2 - круг: ";
    cin >> figure_choice;
    if (figure_choice == 0) {
        double l, h;
        cout << "Введите a: "; 
        cin >> h;
        cout << "Введите b: ";
        cin >> l;
        cout << "answer: " << rectangle(l, h);
    } else if (figure_choice == 1) {
        double a, h;
        cout << "Введите а: ";
        cin >> a;
        cout << "Введите h: ";
        cin >> h;
        cout << "answer: " << triangle(a, h);
    } else {
        double r;
        cout << "Введите r: ";
        cin >> r;
        cout << "answer: " << circle(r);
    }
}
#include <iostream>
#include <cmath>

using namespace std;
#define PI 3.141592

void plot(double value)
{
    int spot = (value+1.0) * 10;
    for (int i = 0; i < spot - 1; i++) {
        cout << " ";
    }
    cout << "*\n";
}

int main() {
    for (double angle = 0.0; angle <= PI; angle += PI / 10) {
        double value = sin(angle);
        // cout << "angle" << "sin: " << value << " spot: " << (int)((value+1.0) * 10) << "\n";
        plot(value);
    }
    return 0;
}
#include <iostream> 


int main() {
    double x, y;
    x = -4;
    while (x <= 4) {
        y = (pow(x, 2) - 2 * x + 2) / (x - 1);
        std::cout << "x = " << x << "\t" << "y = " << y << "\n";
        x += 0.5;
    }
}
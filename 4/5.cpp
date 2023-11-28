#include <cmath>
#include <iostream>

int main() {
    const int width = 80;  // ширина консоли
    const int height = 50; // высота консоли
    const double pi = 3.141592653589793;

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {

            double scaledX = (2 * pi) * (x / static_cast<double>(width));
            int scaledY = (height / 2) * (1 - sin(scaledX));

            if (y == scaledY) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }

        }
        std::cout << "\n";
    }

    return 0;
}
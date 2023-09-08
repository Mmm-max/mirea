#include <iostream>
#include <string>



int main() {
    bool light, curtain;
    std::string wod1, wod2;
    std::cout << "На улице день? да/нет \n";
    std::cin >> wod1;
    // std::cout << "Your answer: " << wod1;
    std::cout << "Шторы закрыты? да/нет \n";
    std::cin >> wod2;
    // std::cout << "Your answer: " << wod2;

    if (not wod1.compare("да")) {
        light = true;
    } else if (not wod1.compare("нет")) {
        light = false;
    } else {
        std::cout << "error";
    }
        if (not wod2.compare("да")) {
        curtain = false;
    } else if (not wod2.compare("нет")) {
        curtain = true;
    } else {
        std::cout << "error";
    }
    std::cout << light << "\n" << curtain << "\n";
    
    if (light * curtain == 1) {
        std::cout << "В комнате светло \n";
    } else {
        std::cout << "В комнате темно \n";
    }
}
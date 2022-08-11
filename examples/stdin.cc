#include <iostream>


int main() {
    int input;

    while (std::cin >> input) {
        std::cout << "> " << input << std::endl;
    }

    std::cout << "We are finishing gracefully!!!" << std::endl;
}
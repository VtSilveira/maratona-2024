#include <iostream>

int main() {
    int w;
    
    // Reading the weight of the watermelon
    std::cin >> w;
    
    // Checking if it can be divided into two even positive parts
    if (w > 2 && w % 2 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}


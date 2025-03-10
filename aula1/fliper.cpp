#include <iostream>

int main() {
    int P, R;
    
    // Lendo os valores de P e R
    std::cin >> P >> R;
    
    // Determinando o caminho da bolinha
    if (P == 0) {
        std::cout << "C" << std::endl;
    } else if (R == 0) {
        std::cout << "B" << std::endl;
    } else {
        std::cout << "A" << std::endl;
    }
    
    return 0;
}

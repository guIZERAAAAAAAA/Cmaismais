#include <iostream>
 
int main() {
    int nota;
 
    std::cout << "Digite a nota: ";
    std::cin >> nota;
 
    if (nota >= 90) {
        std::cout << "Excelente" << std::endl;
    } else if (nota >= 70) {
        std::cout << "Bom" << std::endl;
    } else {
        std::cout << "Precisa melhorar" << std::endl;
    }
 
    return 0;
}
#include <iostream>
 
int main() {
 
    int num1, num2;
 
    std::cout << "Digite dois numeros: ";
 
    std::cin >> num1 >> num2;
 
    int soma = num1 + num2;
 
    std::cout << "Soma = " << soma << std::endl;
 
    return 0;
 
}
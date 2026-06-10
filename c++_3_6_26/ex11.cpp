#include <iostream>
 
int main() {
   
    int vetor[5];
    int soma = 0;
 
 
    std::cout << "Digite 5 numeros inteiros:\n";
    for (int i = 0; i < 5; i++) {
        std::cin >> vetor[i];
        soma += vetor[i];
    }
 
    std::cout << "Soma do vetor: " << soma << std::endl;
 
    return 0;
}
 
 
#include <iostream>
using namespace std;
 
int main() {
    int vetor[5];
 
    cout << "Digite 5 valores:" << endl;
 
    for (int i = 0; i < 5; i++) {
        cin >> vetor[i];
    }
 
    cout << "Valores digitados:" << endl;
 
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << endl;
    }
 
    return 0;
}
 
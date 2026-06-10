#include <iostream>
using namespace std;
 
int main() {
    int n;
 
    do {
        cout << "Digite um numero: ";
        cin >> n;
    } while (n < 0);
 
    cout << "Numero valido: " << n << endl;
 
    return 0;
}
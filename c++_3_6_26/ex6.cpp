#include <iostream>
using namespace std;
 
int main() {
    int escolha;
 
    cout << "Digite 1 a 3 : ";
    cin >> escolha;
 
    switch (escolha) {
        case 1:
            cout << "Voce escolheu A    ";
            break;
 
        case 2:
            cout << "Voce escolheu B";
            break;
           
        case 3:
            cout << "Voce escolheu C";
            break;
    }
 
    return 0;
}
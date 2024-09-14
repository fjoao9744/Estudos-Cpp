#include <iostream>

using namespace std;

int main() {
    int n1;
    int n2;
    
    cout << "Digite um numero: "; cin >> n1;
    cout << "Digite outro numero: "; cin >> n2;
    cout << "Qual a operação que irá fazer: \n[1] Soma \n[2] Subtração \n[3] Multiplicação \n[4] Divisão \n"; 
    int cond; cin >> cond;
    if (cond == 1) {
        cout << "o resultado da operação é: " << n1 + n2;
    }
    if (cond == 2) {
        cout << "o resultado da operação é: " << n1 - n2;
    }
    if (cond == 3) {
        cout << "o resultado da operação é: " << n1 * n2;
    }
    if (cond == 4) {
        cout << "o resultado da operação é: " << n1 / n2;
    }
    
    

    return 0;
}
#include <iostream>
using namespace std;


int main() {
    int n1, n2;
    cout << "Digite um numero: "; cin >> n1;
    cout << "digite outro numero: "; cin >> n2;
    
    char oper;
    cout << "Qual operação deseja fazer: (+, -, /, *): ";
    cin >> oper;
    
    switch (oper) {
        case '+':
        cout << n1 + n2;
        case '-':
        cout << n1 - n2;
        case '/':
        cout << n1 / n2;
        case '*':
        cout << n1 * n2;
    }
    
    
    return 0;
}
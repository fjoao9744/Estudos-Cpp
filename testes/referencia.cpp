#include <iostream>
using namespace std;

int main()
{
    int numero = 0; // criando o valor 0
    
    int &nada = numero; // criando uma referencia para a variavel numero
    
    cout << nada; // printando a variavel de referencia
    
}

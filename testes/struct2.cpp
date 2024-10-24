#include <iostream>
using namespace std;

// estruturas nomeadas
struct smogon {
    int var;
};

int main()
{
    smogon capa; // declaração de estrutura(usa como o tipo de dado)
    
    capa.var = 2; // redefinição de valor(0)
    
    cout << capa.var; // printando dado 
    
}

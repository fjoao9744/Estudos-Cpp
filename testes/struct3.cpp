#include <iostream>
#include <string>
using namespace std;

struct pessoa {
    pessoa() { // metodo construtor
        nome = "nenhum"; // vai ser esse valor se o usuario não declarar
    }
    string nome;
};

int main()
{
    pessoa joao;
    joao.nome = "joao";
    
    cout << joao.nome << endl;

    pessoa maria;

    cout << maria.nome << endl;
}


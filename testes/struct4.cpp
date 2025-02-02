#include <iostream>
#include <string>
using namespace std;

struct pessoa {
    pessoa() {
        nome = "nenhum"; 
    }
    pessoa(string name) {
        nome = name;
    }
    string nome;
};

int main()
{
    pessoa joao("joao");
    // joao.nome = "joao";
    
    cout << joao.nome << endl;

}


#include <iostream>
using namespace std;

struct pessoa {
    pessoa() {
        nome = "nenhum";
        idade = 0;
        peso = 0.0;
        altura = 1.70;
    }
    pessoa(string n, int i, float p, float a) {
        nome = n;
        idade = i;
        peso = p;
        altura = a;
    }

    string nome;
    int idade;
    float peso;
    float altura;

};

int main() {
    pessoa joao;
    cout << joao.nome << " " << joao.idade << " " << joao.peso << " " << joao.altura << endl;

    pessoa maria("maria", 21, 39.0, 1.64);

    cout << maria.nome << " " << maria.idade << " " << maria.peso << " " << maria.altura << endl;

}



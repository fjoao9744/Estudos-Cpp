#include <iostream>
#include <string>
using namespace std;

struct Human {
    string nome;
    int idade;
    float peso;
    float tamanho;
};

int main() {
    Human joao;
    joao.nome = "joao";
    joao.idade = 19;
    joao.peso = 40;
    joao.tamanho = 1.80;

    cout << joao.nome << " " << joao.idade << " " << joao.peso << " " << joao.tamanho;

}
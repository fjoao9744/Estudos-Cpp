#include <iostream>
#include <string>
using namespace std;

struct Human {
    Human() {
        nome = "humano";
        idade = 1;
        peso = 0.5;
        tamanho = 0.3;
    }
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

    cout << joao.nome << " " << joao.idade << " " << joao.peso << " " << joao.tamanho << endl;
    Human jose;

    cout << jose.nome << " " << jose.idade << " " << jose.peso << " " << jose.tamanho;

    

}
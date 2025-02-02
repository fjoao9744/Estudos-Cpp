#include <iostream>
using namespace std;

struct pessoa {
    pessoa() {
        this-> nome = "nenhum";
        this-> idade = 0;
        this-> peso = 0.0;
        this-> altura = 1.70;
    }
    pessoa(string n, int i, float p, float a) {
        this-> nome = n;
        this-> idade = i;
        this-> peso = p;
        this-> altura = a;
    }
    void show() {
        cout << this-> nome << " " << this-> idade << " " << this-> peso << " " << this-> altura << endl;
    }

    string nome;
    int idade;
    float peso;
    float altura;

};

int main() {
    pessoa joao;
    joao.show();

    pessoa maria("maria", 21, 39.0, 1.64);

    maria.show();

}



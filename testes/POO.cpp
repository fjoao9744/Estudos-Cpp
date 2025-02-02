#include <iostream>
#include <string>
using namespace std;

class Pessoa { // as classes são como structs só que tem atributos publicos e privados(os aributos privados não podem ser acessados)

private:
    string nome;
    int idade;
    float peso;
    float altura;

public:
    Pessoa(string name="nenhum", int age=0, float weight=0.0, float height=0.0) {
        this -> nome = name;
        this -> idade = age;
        this -> peso = weight;
        this -> altura = height;
    }
    void show() {
        cout << this-> nome << " " << this-> idade << " " << this-> peso << " " << this-> altura << endl;
    }
    void aniversario() {
        this-> idade++;
    }

};

int main()
{
    Pessoa joao;
    Pessoa maria("maria", 19, 49, 1.65);

    joao.show();
    maria.show();

    maria.aniversario();
    maria.aniversario();
    maria.aniversario();
    maria.aniversario();
    maria.aniversario();
    maria.aniversario();

    maria.show();

}
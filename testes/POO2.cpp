#include <iostream>
using namespace std;

class Person {
    private:
    string nome = "joao";
    
    public:
    void show();

};

void Person::show() { // se um metodo não foi escrito, você pode reescrever ele com o ::
    cout << nome; // é como se fosse a continuação do void show() dentro da classe
}

int main() {
    Person joao;
    joao.show();

}
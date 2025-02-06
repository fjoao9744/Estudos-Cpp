#include <iostream>
using namespace std;

class Person {
    private: 
    string name;
    int idade;
    
    public:
    string Getname() {
        return this-> name;
    }

    void Setname(string new_name) {
        this-> name = new_name;
    }

};

int main() {
    Person joao;
    joao.Setname("joao");
    cout << joao.Getname();
}


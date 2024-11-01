using namespace std;
#include <iostream>

int main()
{
    string fruta = "banana"; // variavel fruta
    string* ptr = &fruta; // ponteiro da variavel fruta
    
    cout << &fruta << endl; // acessando o endereço de memoria da variavel
    cout << fruta << endl; // acessando o valor da variavel
    cout << ptr << endl; // acessando o ponteiro que referencia a variavel
    cout << *ptr; // acessando o valor desreferenciado do ponteiro
    // o valor desreferenciado é o valor armazenado no ponteiro
}

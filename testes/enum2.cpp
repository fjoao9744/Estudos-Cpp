#include <iostream>
using namespace std;

enum level { // enumerações com declarações
    LOW = 20,
    MEDIUM = 40,
    HIGH = 50,
    SUPER_HIGH,
    ULTRA_HIGH
};

int main()
{
  //enum level -> é como se fosse o tipo de dado, "a enumeração chamada level"
    enum level nivel = LOW; // declarando a variavel com a enumeração
    cout << nivel;
    
    cout << endl;

    nivel = HIGH;
    cout << nivel;
    
    cout << endl;

    nivel = SUPER_HIGH; // quando não declaramos o valor da variavel, ela recebe o valor +1
    cout << nivel;
    
    cout << endl;

    nivel = ULTRA_HIGH;
    cout << nivel;
}

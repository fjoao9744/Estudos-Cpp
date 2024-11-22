#include <iostream>
using namespace std;

void swap(int &n1, int &n2) { // passando a referencia das variaveis
    int x = n1;
    int y = n2;
    
    n1 = y;
    n2 = x;
};

int main()
{
    int n = 2;
    int m = 3;
    
    cout << n << m;
    swap(n, m); cout << endl;
    cout << n << m; // quando temos uma função que recebe a referencia como parametro a função consegue alterar a variavel fora do scopo da função
} // caso tenha duvida, tire a referencia e veja que não altera a variavel pois agora as variaveis só estão no scopo da função

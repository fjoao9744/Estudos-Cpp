#include <iostream>
using namespace std;


// forma errada(declarando 3 funções com a mesma função)
/*
int soma_int(int n1, int n2) {
    return n1 + n2;
}

int soma_double(double n1, double n2) {
    return n1 + n2;
}

int soma_float(float n1, float n2) {
    return n1 + n2;
}
*/


// forma correta(declarando 3 funções que fazem a mesma coisa com o mesmo nome)

int soma(int n1, int n2) {
    return n1 + n2;
}
double soma(double n1, double n2) {
    return n1 + n2;
} 
float soma(float n1, float n2) {
    return n1 + n2;
}

int main()
{
    cout << soma(2.5, 5.2);
    
}

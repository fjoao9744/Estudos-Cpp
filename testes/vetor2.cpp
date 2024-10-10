#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vetor = {10, 30, 40, 50, 70, 80, 100, 130}; //criando um vetor
    int len; //variavel para verificar o tamanho
    
    for (int i : vetor) {
        len++; //para cada item no vetor len recebe 1
    }
    
    for (int i; i < len; i++) { //enquanto i não for igual a len:
        cout << vetor[i] << endl; //printa o vetor com a posição desejada(do i)
    }
}

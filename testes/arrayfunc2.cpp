#include <iostream>
#include <vector>
using namespace std;

void array_view(vector<int> vetor) { // uma função que recebe um vetor como parametro

    for (int i = 0; i < vetor.size(); i++) { // cria uma contagem de 0 até o tamanho do vetor
        cout << vetor[i] << endl; // mostra os itens do vetor
        
    }
}

int main()
{
    vector<int> nums = {10, 20, 30, 40, 50}; // criando um vetor
    array_view(nums); // passando ele como argumento
}

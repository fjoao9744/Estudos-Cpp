#include <iostream>
#include <vector> // adiciona vetores no codigo
#include <string>

using namespace std;

int main()
{
    vector<string> vetor = {"carro", "smogon", "capa"}; // fazendo um vetor
    
    vetor.push_back("jj"); // adicionando um item no vetor
    
    for (string i : vetor) { //printando itens do vetor
        cout << i << endl;
    }
}

using namespace std;
#include <iostream>
#include <string>
#include <vector>


vector<string> repeat(string palavra, int vezes) { // uma função que retorna um vetor de strings
    vector<string> vetor;
    for (int i = 0; i < vezes; i++) {
        vetor.push_back(palavra);
    }
    return vetor;
};

string first_item(vector<string> vetor) { // uma função que retorna uma string
    return vetor[0];
};

int num_repeat(vector<string> vetor) { // uma função que retorna um numero
    int num = 0;
    for (string c : vetor) {
        num++;
    }
    return num;
};


int main()
{
    vector<string> lista = repeat("smogon", 10);
    
    for (string c : lista) {
        cout << c << endl;
    }
    
    cout << "Primeiro item: " << first_item(lista);
    cout << endl;
    cout << "Numero de vezes repetida: " << num_repeat(lista);
}

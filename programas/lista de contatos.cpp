#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct contatos { // criando uma estrutura para servir como um contato
    string nome;
    string numero;
};

int main()
{   
    vector<contatos> ctt = {{"", ""}}; // vetor com todos os contatos
    while (true) {
    
    contatos contato; 
    cout << "digite o nome do contato \n"; cin >> contato.nome; 
    cout << "digite o numero do contato \n"; cin >> contato.numero;
    
    ctt.push_back(contato); // adicionando um contato a lista
    
    for (int i = 0 ; i < ctt.size() ; i++) { // percorrer os items de um vetor de struturas
        cout << ctt[i].nome << " " << ctt[i].numero << endl;
    }
    
}
}

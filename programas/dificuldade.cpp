#include <iostream>
using namespace std;

enum dificuldade { // criando o enum
    FACIL = 1,
    MEDIO,
    DIFICIL
};

int main()
{
    cout << "Selecione a dificuldade: " << endl; // criando a aba de usuario
    cout << "1- Facil \n2- Medio \n3- Dificil \n";
    
    int escolha; cin >> escolha;
    
    switch (escolha) { // verificando a escolha do usuario
        case 1:
        cout << "você selecionou o modo facil. ";
        
        break;
        case 2:
        cout << "você selecionou o modo medio. ";
        
        break;
        case 3:
        cout << "você selecionou o modo dificil. ";
        
        break;
    }
    
    
    
}

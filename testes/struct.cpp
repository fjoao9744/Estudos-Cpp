#include <iostream>
using namespace std;

// estrutura em multiplas variaveis
struct {
    int num = 2; 
    //valores da estrutura
} smogon, smogon2; //quantidade e nome das estruturas

int main()
{
    cout << smogon.num << smogon2.num << endl; //acessando a estrutura

}

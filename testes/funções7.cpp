#include <iostream>
#include <vector>
using namespace std;

void dobrar_ponteiro(int* ptr){ // função que altera a variavel diretamente
    *ptr *= 2; 
}

int dobrar_return(int num) { // função que retorna o dobro do valor
    return num * 2;
}

void dobrar_numero(int num) { // função que cria um variavel que é o dobro da passada como argumento
    // só pode ser usada no escopo da função
    num *= 2;
}

int main()

{
    int n1 = 4;
    
    cout << n1 << endl;
    
    dobrar_ponteiro(&n1);
    
    cout << n1 << endl;
    
    dobrar_numero(n1);
    
    cout << n1 << endl;
    
    cout << dobrar_return(n1); 
    
}

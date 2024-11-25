#include <iostream>
using namespace std;

int main()
{
    int array[3] = {12, 11, 10};
    
    cout << "Endereços de memoria de arrays:" << endl;
    for (int i : array) {
        cout << &i << " - " << i << endl; // endereço de memoria da variavel de controle
    }
    
    cout << &array << endl; // endereço de memoria do array(quando chamamos pelo nome do array ele interpreta como array[0])
    
    for (int i = 0; i <= 2 ; i++) {
        cout << &array[i] << " - " << array[i] << endl; // endereço de memoria dos itens do array
    }
}

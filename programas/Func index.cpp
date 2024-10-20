#include <iostream>
using namespace std;

int index(int num[], int len, int valor) {
    for (int i = 0; i < len ; i++) {
        if (num[i] == valor) {
            return i;
        }
    }
    return -1;
}
// não é possivel passar um array como argumento e ler ele com um forearch, então passei o tamanho do array e li com um for normal

int main()
{
    int matriz[] = {2, 3, 4, 5, 9, 1, 5, 3};
    int tamanho = 0;
    for (int c : matriz) {
        tamanho++;
    }
    
    cout << index(matriz, tamanho, 9); // resultado final
}

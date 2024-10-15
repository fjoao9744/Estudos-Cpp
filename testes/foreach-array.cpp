#include <iostream>
using namespace std;

int main()
{
    int matriz[5] = {10, 20, 30, 40, 50}; //matriz
    for (int i: matriz) { //i vai receber os itens da matriz
        cout << i << endl;
    }
}

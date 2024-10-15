#include <iostream>
using namespace std;

int main()
{
    int matriz[5]; 
    matriz[0] = 2;
    matriz[1] = 3;
    matriz[3] = 5;
    
    for (int i: matriz) {
        cout << i << endl;
    }
}


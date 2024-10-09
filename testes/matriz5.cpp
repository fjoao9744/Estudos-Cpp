#include <iostream>
using namespace std;

int main()
{
    int matriz[] = {10, 20, 40, 60, 70};
    
    cout << sizeof(matriz) << endl;
    cout << sizeof(matriz) / sizeof(matriz[0]); //tamanho do array
    
    for (int c; c < sizeof(matriz) / sizeof(matriz[0]); c++) {
        cout << "smogon";
    }
    
}

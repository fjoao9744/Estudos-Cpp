#include <iostream>
using namespace std;

int main()
{
    int matriz[2][4] =
    { 
        {1, 5, 3, 7},
        {10, 30, 60, 20}
    };
    
    // printando uma matriz com um for
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
        cout << matriz[i][j] << endl;
    }
}
}

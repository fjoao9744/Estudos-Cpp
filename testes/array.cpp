#include <iostream>
using namespace std;

int main()
{
    int matriz[5] = {2, 5, 6, 49, 500};
    
    for (int _: matriz) {
        cout << _ + 2 << endl;
    }
}

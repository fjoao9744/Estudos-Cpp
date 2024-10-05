#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 6; i++) 
    { 
        cout << "externo " << i << endl ;
        for (int j = 1; j <= 3; j++) 
        {
            cout << " interno " << j << endl;
        }
    }
}

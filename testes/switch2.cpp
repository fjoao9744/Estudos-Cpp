#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    switch (n) {
        case 1:
        cout << "seu numero é 1";
        break; 
        
        case 2:
        cout << "seu numero é 2";
        break; 

        case 3:
        cout << "seu numero é 3";
        break; 
        
        default:
        cout << "não consegui identificar seu numero.";
    }
}

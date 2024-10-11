#include <iostream>
using namespace std;

int main()
{  
    int i = 5;
    if (i >= 0 && i <= 10) { // and
        cout << "seu numero esta entre 1 e 10" << endl;
    }
    if (i >= 0 || i <= 10) { // or
        cout << "seu numero esta entre 1 e 10" << endl;
    }
    if (!(i >= 0)) { // not
        cout << "seu numero é negativo" << endl;
    }
}


#include <iostream>
using namespace std;

enum level {
    LOW,
    MEDIUM,
    HIGH,
    SUPER_HIGH
};

int main()
{
    enum level nivel = LOW;
    cout << nivel;
    
    cout << endl;
    
    nivel = HIGH;
    cout << nivel;
    
    cout << endl;

    nivel = SUPER_HIGH;
    cout << nivel;
}

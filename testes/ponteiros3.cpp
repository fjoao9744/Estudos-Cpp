#include <iostream>
using namespace std;

int main()
{
    int n1 = 10;
    int* ptr = &n1;
    
    cout << ptr << endl;
    cout << n1 << endl;
    
    *ptr = 12; // alterando uma variavel pelo ponteiro dela
    
    cout << ptr << endl;
    cout << n1;
    
}

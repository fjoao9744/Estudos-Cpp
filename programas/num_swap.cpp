#include <iostream>
#include <vector>
using namespace std;

void num_swap(int &n1, int &n2) { 
    int n3 = n1;
    
    n1 = n2;
    n2 = n3;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    
    cout << num1 << endl << num2 << endl;
    
    num_swap(num1,num2);
    
    cout << num1 << endl << num2 << endl;
}


#include <iostream>
using namespace std;

int main()
{
    bool flag = false;
    
    //forma certa
    do 
    { 
        cout << "smogon";
    } while (flag == true); //repete um vez sempre e depois verifica no final
    
    
    //forma errada
    while (flag == false) 
    { 
        cout << "smogon";
        flag = true;
    }
}

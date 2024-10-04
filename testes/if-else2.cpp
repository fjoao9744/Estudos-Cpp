#include <iostream>
#include <string>
using namespace std;

int main()
{
    int time = 4;
    string smog = (time >= 7 && time <= 20) ? "bom dia" : "boa noite";
    cout << smog;
    
    return 0;
}

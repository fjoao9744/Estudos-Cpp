#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    char sex;
    cout << "digite seu sexo[F/M]: ";
    cin >> sex;
    
    cout << "Aguarde..." << endl;
    this_thread::sleep_for(chrono::seconds(3)); 
    
    if (sex == 'F' || sex == 'f' || sex == 'M' || sex == 'm') {
        cout << "sexo ja registrado.";
    } else {
        cout << "digite um sexo valido ";
    }
}


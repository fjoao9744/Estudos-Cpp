#include <iostream> 
#include <string>
using namespace std;

int main()
{
    /* string name;
    cin >> name;

    cout << name; */

  // c++ sempre pega apenas a primeira palavra quando vc usa o cin, por isso o getline acaba se tornando uma opção melhor
    
    string nome;
    getline (cin, nome);
    cout << nome;
    
}

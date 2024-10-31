#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

struct entity {
    string nome;
    int hp;
    int atk;
    int def;

};

int main()
{
    entity player = {"João", 20, 3, 2};
    entity slime = {"slime", 13, 2, 0};
    
    cout << "Você encontrou um slime! \n";
    while (true) {
        cout <<
        player.nome << " " << player.hp
        << endl << 
        slime.nome << " " << slime.hp << endl;
        
        this_thread::sleep_for(chrono::seconds(1));
        
        player.hp -= slime.atk;
        slime.hp -= player.atk;
        
        if (player.hp <= 0 || slime.hp <= 0) {
            cout << slime.nome << " morreu. ";
            break;
        }
    }
}

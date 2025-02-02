#include <iostream>
using namespace std;

class Npc {
    private:
        string nome;
        int hp;
        int level;
        int forca;
        int defesa;
        int velocidade;

    public:
        Npc(string arg_nome, int arg_hp = 0,  int arg_level = 0, int arg_forca = 0, int arg_defesa = 0, int arg_velocidade = 0) {
            this-> nome = arg_nome;
            this-> hp = arg_hp;
            this-> level = arg_level;
            this-> forca = arg_forca;
            this-> defesa = arg_defesa;
            this-> velocidade = arg_velocidade;
        }

        void tomar_dano(int dano) {
            this-> hp -= dano;
        } 
        void recuperar(int vida) {
            this-> hp += vida;
        }

        void atacar(Npc &other_npc) { // passar a referencia para alterar a variavel diretamente
            other_npc.tomar_dano(this-> forca);
        }

        void ficha() {
            cout << this-> nome << " ";
            cout << this-> hp << " ";
            cout << this-> level << " ";
            cout << this-> forca << " ";
            cout << this-> defesa << " ";
            cout << this-> velocidade << endl;
        }
};

int main() {
    Npc player("joao", 20, 1, 9, 3, 4);
    Npc slime("slime", 15, 1, 6, 0, 1);

    player.ficha();
    slime.ficha();

    player.atacar(slime);

    player.ficha();
    slime.ficha();

}




#include <iostream>
using namespace std;

enum Dificuldade {
    FACIL = 1,
    MEDIO,
    DIFICIL
};

int main()
{
    
    int vidas;
    int num_max;
    
    cout << "Qual o nivel de dificuldade que deseja?" << endl << "Facil[1] | Medio[2] | dificil[3]" << endl;
    int dificuldade;
    
    cin >> dificuldade;
    dificuldade = static_cast<Dificuldade>(dificuldade);
    
    switch (dificuldade) {
        case FACIL:
            vidas = 3;
            num_max = 3;

            break;
            
            
        case MEDIO:
            vidas = 4;
            num_max = 10;

            break;
            
            
        case DIFICIL:
            vidas = 5;
            num_max = 100;
            
            break;
    }
    
    srand(static_cast<unsigned int>(time(0))); // Semente baseada no tempo real
    
    int random_num = rand() % num_max + 1; // Gera um numero aleatorio
    
    while (true){
        
        cout << "tente advinhar o numero de 1 a " << num_max << endl;
        
        int num = 0; cin >> num; // Tentativa do usuario

        cout << "vidas:" << vidas << endl;
        
        if (vidas == 0) {
            cout << "Você perdeu suas vidas." << endl << "O numero era: " << random_num;
            break;
        }
        if (num == random_num) { // Verifica se a tentativa foi correta
        
            cout << "Sua tentativa foi correta! " << endl << "era " << random_num << " !";
            break;
            
        } else {
            
            vidas--;
            cout << "Sua tentativa foi incorreta, tente novamente" << endl;
        }
    }
}

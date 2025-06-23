#include <iostream>
using namespace std;

class Vetor {
    private:
        int capacidade;
        int index = 0;
        int* lista;
        
        int aumentar() {
            this->capacidade *= 2;
            int* lista_temp = new int[capacidade];
            
            for (int i = 0; i < this->index; i++) {
                lista_temp[i] = this->lista[i];
            }
            
            delete[] this->lista;
            this->lista = lista_temp;
            
            cout << "aumentou a capacidade!" << endl;
            
            return this->capacidade;
        }
        
        
    public:
        Vetor(int capacidade) {
            this->capacidade = capacidade;
            this->lista = new int[capacidade];
        };
        
        int add(int num) {
            if (this->index < this->capacidade) {
                this->lista[this->index] = num;
                this->index++;
            } else {
                this->aumentar();
                this->lista[this->index] = num;
                this->index++;
            }
            return num;
        };
        
        void show() {
            for (int i = 0; i < this->index;i++) {
                cout << this->lista[i] << endl;
            }
            cout << "Seu vetor ainda tem " << capacidade - index << " espaços de disponiveis" << endl;
        }
        
        ~Vetor() {
            delete[] lista;
        }
    
};

int main() {
    Vetor vetor(5);
    
    vetor.add(4);
    vetor.add(0);
    
    vetor.show();
    vetor.add(4);
    vetor.add(4);
    vetor.add(4);
  
    vetor.show();
    
}

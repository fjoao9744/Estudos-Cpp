// incompleto

#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int>& lista) {
    int i = 0;
    bool trocou = true;
    
    do  {
        if (lista[i] > lista[i + 1]) {
            swap(lista[i], lista[i + 1]);
            
        } else {
            i += 1;
        }
        if (i == lista.size() - 1) {
            break;
        }
    
    } while (true);
    
};

int main() {
    vector<int> lista = {1, 3, 4, 1, -1, 6, 8, 13, 32, 64, 213, 42, 2, 3, 87, 98, -4, -100};
    
    for (int i : lista) {
        cout << i << " ";
    };
    
    bubble_sort(lista);
    
    cout << endl;
    
    for (int i : lista) {
        cout << i << " ";
    };
    
}

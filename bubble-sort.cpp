#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }; cout << endl;

};

void bubble_sort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        bool trocou = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                trocou = true;
            }
        }
        
        // Se nenhuma troca foi feita, o array já está ordenado
        if (!trocou) {
            break;
        }
    }
}

int main() {
    vector<int> lista = {1, 3, 4, 1, -1, 6, 8, 13, 32, 64, 213, 42, 2, 3, 87, 98, -4, -100};
    
    print_array(lista);
    
    bubble_sort(lista);
    
    print_array(lista);

}

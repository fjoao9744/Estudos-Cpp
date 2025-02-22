#include<iostream>
using namespace std;
#include <vector>

vector<int> par(vector<int> vetor) {
    vector<int> pares;

    for (size_t i = 0; i < vetor.size(); ++i) {
        if (vetor[i] % 2 == 0) {
        pares.push_back(vetor[i]);
        }
    }
    return pares;
}

int main()
{
    vector<int> vetor = {2, 3, 5, 10, 20, 3, 9};

    vector<int> vetor_pares = par(vetor);

    for (size_t i = 0; i < vetor.size(); ++i) {
    cout << vetor[i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i < vetor_pares.size(); ++i) {
    cout << vetor_pares[i] << " ";
    }

}
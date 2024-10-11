#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vetor = {10, 20, 40, 60, 70, 90, 100, 200, 130};
    int len;
    
    for (int i : vetor) {
        len++;
    } 
    
    for (int i ; i < len ; i++) {
        cout << vetor[i] << endl;
    }
    
}

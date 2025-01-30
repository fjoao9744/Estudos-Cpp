#include <iostream>
#include <vector>
using namespace std;

vector<int> divisors(int num) {
    vector<int> vetor = {};
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            vetor.push_back(i);
        }
    }
    

    return vetor;
}

bool is_perfect_num(int num) {
    vector<int> divisores = divisors(num);

    int sum = 0;

    for (int d : divisores) { 
        sum += d;
    }

    return sum == num;
}

int main() {
    cout << is_perfect_num(6) << endl;
    cout << is_perfect_num(12) << endl;
    cout << is_perfect_num(14) << endl;
    cout << is_perfect_num(28) << endl;

}




#include <iostream>
#include <string>
using namespace std;

void repeat(string palavra, int vezes) {
    for (int i = 1; i <= vezes; i++) {
        cout << palavra << endl;
    }
};

int main()
{
    repeat("smogon", 5);
}

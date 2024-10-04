#include <iostream>
using namespace std;


int main()
{
    int time = 21;
    if (time > 7 && time < 20) {
        cout << "bom dia";
    }
    else if (time > 20) {
        cout << "boa noite";
    }
    else {
        cout << "boa madrugada";
    }

    return 0;
}

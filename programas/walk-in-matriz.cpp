#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

vector<int> index(int num[][3], int len, int valor) {
    for (int i = 0; i < len ; i++) {
        for (int j = 0; j < 3; j++) {
            if (num[i][j] == valor) {
                
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int row, colunm;
    int map[3][3] = {
        {0, 0, 0},
        {0, 0, 1},
        {0, 0 ,0}
    };
    while (true) {
        for (int i = 0; i < 3 ; i++) {
            for (int j = 0; j < 3 ; j++) {
                cout << map[i][j] << " ";
            }
            cout << endl;
        }
        
    vector<int> array = index(map, 3, 1);

    char pos = ' '; cin >> pos;
    
    if (pos == 'a') {
        map[array[0]][array[1]] = 0;
        map[array[0]][array[1] - 1] = 1;
    }
    if (pos == 's') {
        map[array[0]][array[1]] = 0;
        map[array[0] + 1][array[1]] = 1;
    }
    if (pos == 'd') {
        map[array[0]][array[1]] = 0;
        map[array[0]][array[1] + 1] = 1;
    }
    if (pos == 'w') {
        map[array[0]][array[1]] = 0;
        map[array[0] - 1][array[1]] = 1;
    }
    system("clear"); //cls se for em windows
    }
}

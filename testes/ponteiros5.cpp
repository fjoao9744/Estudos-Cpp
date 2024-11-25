#include <iostream>
using namespace std;

int main()
{
    // não é possivel declarar arrays completamente vazios por isso temos que usar o new
    int* nums = new int[10];
    
    for (int i = 0; i < 10; i++) {
        cout << i << " - " << &nums[i] << " - " << nums[i] << endl;
    }
    
    cout << "\n";
    
    nums[5] = 10;
    nums[9] = 20;

    for (int i = 0; i < 10; i++) {
        cout << i << " - " << &nums[i] << " - " << nums[i] << endl;
    }
}

#include <iostream>
using namespace std;

void array_view(int array[5]) {
    for (int i = 0 ; i < 5 ; i++) {
        cout << array[i] << endl;
    }
}

int main()
{
    int nums[5] = {10, 20, 30, 40, 50};
    
    array_view(nums);
}

#include <iostream>
#include <vector>
using namespace std;

bool is_approved(vector<int> notes) {
    int total_score = 0;
    
    for (int i: notes) {
        total_score += i;
    }
    cout << total_score << endl;
    return (total_score >= 18 && total_score <= 30) ? true : false;
}

int main()
{
    vector<int> notes_list = {4, 10, 3, 8};
    cout << is_approved(notes_list);
}


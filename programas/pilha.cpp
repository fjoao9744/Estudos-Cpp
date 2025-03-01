#include <iostream>
#include <vector>
#include <string>
#include <any>
using namespace std;

class Stack {
    private:
        vector<any> items;

    public:
        void push(any item) {
            this-> items.push_back(item);
            
        }

        void pop() {
            if (!this-> is_empty()) {
                this-> items.pop_back();
            } else {
                cout << "A pilha esta vazia!";
            }
        }

        any peek() {
            if (!this-> is_empty()) {
            return this-> items.back();
            }
            cout << "A pilha esta vazia!";
            return {};
            
        } 

        bool is_empty() {
            return this-> items.size() == 0;
        } 
        
        int size() {
            return this-> items.size();
        }

};

int main() {
    Stack stack;

    stack.push("smogon");

    cout << stack.is_empty();


}
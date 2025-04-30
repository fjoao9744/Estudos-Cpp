#include <iostream>
#include <vector>
#include <string>

struct person {
    std::string name;
    int age;
};

class Store {
    private:
    std::vector<person> clients;
    
    public:
    Store() {
        std::cout << "Store was created!" << std::endl;
    }
    
    person add_client(person client) {
        this->clients.push_back(client);
        return client;
    }
    
    void show_clients() {
        for (int i = 0; i < this->clients.size(); i++) {
            std::cout << this->clients[i].name << std::endl;
        }
    }
};

int main() {
    Store store; // criação da classe
    
    person joao; // assim cria uma pessoa
    joao.name = "joao";
    joao.age = 18;
    
    person otavio;
    otavio.name = "Otavio";
    otavio.age = 17;
    
    person hendrick;
    hendrick.name = "hendrick";
    hendrick.age = 18;
    
    store.add_client(joao);
    store.add_client(otavio);
    store.add_client(hendrick);
    
    store.show_clients();
    
}

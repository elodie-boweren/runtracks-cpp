#include <iostream> 

int main() {
    int nombre;       
    int somme = 0;    

    std::cout << "Entrez cinq entiers :" << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cin >> nombre;   
        somme += nombre;      
    }

    std::cout << "La moyenne est : " << (somme / 5) << std::endl;

    return 0;
}
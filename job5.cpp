#include <iostream> 

int main() {
    int n, m, temp;
    std::cout << "Entrer un entier: ";
    std::cin >> n;

    std::cout << "Entrer un entier: ";
    std::cin >> m;

    std::cout << "Voici tes données: m = "<< m <<" et n = "<< n <<".";

    temp = n;
    n = m;
    m = temp;

    std::cout << "Voici tes données après l'échange de m et n: m = "<< m <<" et n = "<< n <<".";

    return 0;
}
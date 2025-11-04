#include <iostream>

int main() {

    float prix, qté, prixTtc;
    std::cout << "Prix HT du kg: ";
    std::cin >> prix;
    std::cout << "Quantité en kg: ";
    std::cin >> qté;

    prixTtc = prix * qté *1.15;
    std::cout << "Prix TTC pour la quantité demandée: "<< prixTtc <<"€";
}

#include <iostream>

int trouverMin(int *tableau, int taille) {
    int *ptr = tableau;      
    int min = *ptr;         

    for (int i = 1; i < taille; ++i) {
        ptr++;               
        if (*ptr < min) {    
            min = *ptr;      
        }
    }
    return min;
}

int main() {
    int nombres[] = {42, 17, 58, 3, 29};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    std::cout << "Les éléments du tableau : ";
    for (int i = 0; i < taille; ++i)
        std::cout << nombres[i] << " ";

    int minimum = trouverMin(nombres, taille);
    std::cout << "\nLe plus petit élément est : " << minimum << std::endl;

    return 0;
}
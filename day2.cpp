#include <iostream>

class Aquatique {
protected:
    double vitesseNage; 

public:
    Aquatique(double v = 0.0) : vitesseNage(v) {}

    void nager() {
        std::cout << "Je nage à " << vitesseNage << " m/s !" << std::endl;
    }
};

class Terrestre {
protected:
    double vitesseMarche; 

public:
    Terrestre(double v = 0.0) : vitesseMarche(v) {}

    void marcher() {
        std::cout << "Je marche à " << vitesseMarche << " m/s !" << std::endl;
    }
};

class Pingouin: public Aquatique, public Terrestre {
public:
    Pingouin(double vNage, double vMarche)
        : Aquatique(vNage), Terrestre(vMarche) {}
        
     void sePresenter() {
        std::cout << "Je suis un pingouin !" << std::endl;
        marcher();
        nager();
    }
};

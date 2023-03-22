#include "function.h"
#include<iostream>
#include<string>

void MATH::Fraction::setFraction(int numerateur, int denominateur) {
    if(denominateur == 0) {
        std::cout << "Denominateur ne peut pas être 0" << std::endl;
        return;
    }
    this->numerateur = numerateur;
    this->denominateur = denominateur;
    simplification();
}
void MATH::Fraction::simplification(){
// si le numerateur est 0, le denominateur prend la valeur 1
    if (numerateur==0) { denominateur=1; return; }
/* un denominateur ne devrait pas être 0; si c’est le cas, on sort de la méthode */
    if (denominateur==0) return;
/* utilisation de l’algorithme d’Euclide pour trouver le Plus Grand Commun Denominateur (PGCD) entre le numerateur et le denominateur */
    int a=numerateur, b=denominateur;
// on ne travaille qu’avec des valeurs positives...
    if (a<0) a=-a; if (b<0) b=-b;
    if (denominateur==1) return;
    while(a!=b){ if (a>b) a=a-b; else b=b-a; }
// on divise le numerateur et le denominateur par le PGCD=a
    numerateur/=a; denominateur/=a;
// si le denominateur est négatif, on fait passer le signe - au denominateur
    if (denominateur<0) { denominateur=-denominateur; numerateur=-numerateur; }
}

void MATH::Fraction::somme(const MATH::Fraction& f1) {
    int numerateur = this->numerateur * f1.denominateur + this->denominateur * f1.numerateur;
    int denominateur = this->denominateur * f1.denominateur;
    this->numerateur = numerateur;
    this->denominateur = denominateur;
    simplification();
}
MATH::Fraction MATH::operator+(const MATH::Fraction& f1, const MATH::Fraction& f2) {
    MATH::Fraction f3 = f1;
    f3.somme(f2);
    return f3;
}
MATH::Fraction MATH::operator+(const MATH::Fraction& f1, const int& f2) {
    MATH::Fraction f3 = f1;
    f3.somme(MATH::Fraction(f2, 1));
    return f3;
}
MATH::Fraction MATH::operator+(const int& f1, const MATH::Fraction& f2) {
    MATH::Fraction f3 = f2;
    f3.somme(MATH::Fraction(f1, 1));
    return f3;
}
namespace MATH{
    std::ostream& operator<<(std::ostream& os, const MATH::Fraction& f) {
        os << f.numerateur << "/" << f.denominateur;
        return os;
    }
}


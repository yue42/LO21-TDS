
#ifndef UNTITLED1_FUNCTION_H
#define UNTITLED1_FUNCTION_H

#include <iostream>

namespace MATH {
    class FractionException{
        std::string message;
    public:
        FractionException(const std::string& message): message(message) {}
        std::string getinfo() const { return message; }
    };
    class Fraction {
    private:
        int numerateur=0;
        int denominateur=1;
       void  simplification();
    public:
        Fraction(int numerateur, int denominateur): numerateur(numerateur), denominateur(denominateur) {
            if(denominateur == 0) {
                denominateur = 1;
                std::cout << "Denominateur ne peut pas être 0" << std::endl;
                return;
            }
            std::cout << "Construction succès" << std::endl;
            simplification();
        }
      ~Fraction() { std::cout << "Destruction succès" << std::endl;}
         inline int getNumerateur () const { return numerateur; }
         inline int getDenominateur () const { return denominateur; }
        void setFraction (int numerateur, int denominateur) ;
        void somme(const Fraction& f1);
        friend Fraction  operator+(const Fraction& f1, const Fraction& f2);
        friend Fraction  operator+(const Fraction& f1, const int& f2);
        friend Fraction  operator+(const int& f1, const Fraction& f2);
        friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
        Fraction operator++() {
            this->numerateur += this->denominateur;
            return *this;
        }
        Fraction operator++(int) {
            Fraction f = *this;
            this->numerateur += this->denominateur;
            return f;
        }
        /*Fraction  operator+(const Fraction& f1) {
            Fraction f2 = *this;
            f2.somme(f1);
            return f2;
        }
        Fraction  operator+(const int& f1) {
            Fraction f2 = *this;tr
            f2.somme(Fraction(f1, 1));
            return f2;
        }*/
    };
    Fraction  operator+(const Fraction& f1, const Fraction& f2);
    Fraction  operator+(const Fraction& f1, const int& f2);
    Fraction  operator+(const int& f1, const Fraction& f2);
    std::ostream& operator<<(std::ostream& os, const MATH::Fraction& f);
}

#endif //UNTITLED1_FUNCTION_H

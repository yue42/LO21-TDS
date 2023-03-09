//
// Created by leeyu on 06/03/2023.
//
#include "function.h"
#include<iostream>
#include<string>
//#define PI 3.14159
using namespace std;
const double PI = 3.1415926;
void bonjour() {
    cout<<"Entrez votre prenom :";
    string prenom;
    cin>>prenom;
    cout<<"Bonjour "<<prenom<<"\n";
}
void exerciceA(){
    int r; double p, s;
    cout<<"donnez le rayon entier d’un cercle:";
    cin>>r;
    p=2*PI*r;
    s=PI*r*r;
    cout<<"le cercle de rayon "<<r<<"\n";
    cout<<"a un perimetre de "<<p<<"et une surface de"<<s<<"\n";
}
void un::bonjour() {
    cout<<"你好\n";
}
void deux::bonjour() {
    cout<<"bonjour\n";
}
int fct(int x){ std::cout<<"1:"<<x<<"\n"; return 0; }
int fct(float y){ std::cout<<"2:"<<y<<"\n"; return 0; }
int fct(int x, float y){ std::cout<<"3:"<<x<<y<<"\n"; return 0; }
float fct(float x, int y){ std::cout<<"4:"<<x<<y<<"\n"; return 3.14; }
void exercice_surcharge(){
    int i=3,j=15;
    float x=3.14159,y=1.414;
    char c='A';
    double z=3.14159265;
    fct(i); //appel 1
    fct(x); //appel 2
    fct(i,y); //appel 3
    fct(x,j); //appel 4
    fct(c); //appel 5
    //fct(i,j); //appel 6
    //fct(i,c); //appel 7
    fct(i,z); //appel 8
    //fct(z,z); //appel 9
}

//

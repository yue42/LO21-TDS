#include <iostream>
#include<string>
#include "function.h"
/*void essai_alloc(){
    int* pt_int;
    double* pt_double;
    pt_int=(int*)malloc(sizeof(int));
    pt_double=(double*)malloc(sizeof(double)*100);
    free(pt_int);
    free(pt_double);
}*/
/*void essai_alloc(){
    int* pt_int;
    double* pt_double;
    point* pt_point;
    pt_point=new point;
    pt_int=new int;
    pt_double= new double ;
    delete pt_point;
    delete pt_double;
    delete pt_int;
}*/
using namespace std;
struct compte {
    string id;
    int solde;
};
int& operation(compte* tab,string nom){
    int i=0;
    while(tab[i].id!=nom){
        i++;
    }
    return tab[i].solde;


}
void essai_comptes(){
    compte tab[4]={ {"courant", 0},{"codevi", 1500 },
                    {"epargne", 200 }, { "cel", 300 } };
    operation(tab,"courant")=100;
    operation(tab,"codevi")+=100;
    operation(tab,"cel")-=50;
    for(int i=0; i<4; i++) cout<<tab[i].id<<" : "<<tab[i].solde<<"\n";
}
int main() {
    essai_comptes();
    return 0;
}

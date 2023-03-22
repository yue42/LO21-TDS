#include <iostream>
#include<string>
#include "function.h"
using namespace std;
using namespace MATH;
int main(){
    Fraction f1(3,4);
    Fraction f2(1,6);
    Fraction f3 = f1 + f2;
    int a = 1;
    Fraction f4 = f1 + a;
    //Fraction f5 = a + f2;
    cout << f3 << f4;
    return 0;
}


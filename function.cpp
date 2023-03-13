#include "function.h"
#include<iostream>
#include<string>
void init(point* pt, int _x=0, int _y=0, int _z=0) {
    pt->x=_x; pt->y=_y; pt->z=_z;
}
void essai_init() {
    point p;
    init(&p);
    init(&p,1);
    init(&p,1,2);
    init(&p,1,2,3);
}

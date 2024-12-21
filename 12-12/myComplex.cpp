#include <iostream>
#include "myComplex.h"
using namespace std;

complexT complexT::create(double re, double im) {
    complexT c;
    c.re = re, c.im = im;
    return c;
}

void complexT::display() {
    if (im == 0) {cout << re << endl; return;}
    if (re == 0) {cout << im << 'i' << endl; return;}

    // printf("%lf+(%lfi)", c.re, c.im);
    cout << re << "+(" << im << "i)" << endl;

    // if (c.im > 0) printf("%d+%di", c.re, c.im);
    // else printf("%d%di", c.re, c.im);
    return;
}
complexT complexT::add(complexT &c2) {
    complexT sum;
    sum.re = re + c2.re;
    sum.im = im + c2.im;
    return sum;
}
complexT complexT::multi(complexT &c2) {
    complexT prod;
    prod.re = re * c2.re - im * c2.im;
    prod.im = re * c2.im + im * c2.re;
    return prod;
}
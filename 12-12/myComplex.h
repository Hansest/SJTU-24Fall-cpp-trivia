#ifndef My_Complex_h
#define My_Complex_h
    // #include <iostream>
    // using namespace std;

    class complexT {
        double re, im;
    public:
        complexT(double re = 0, double im = 0): re(re), im(im) {}
        complexT create(double, double);
        void display();
        complexT add(complexT&);
        complexT multi(complexT&);
    };


#endif

#include <iostream>
#include <cstdio>
using namespace std;

struct complexT {
    int re, im;
} c1, c2;

void show(complexT c) {
    if (c.im == 0) {printf("%d", c.re); return;}
    if (c.re == 0) {printf("%di", c.im); return;}
    printf("%d+(%di)", c.re, c.im);
    // if (c.im > 0) printf("%d+%di", c.re, c.im);
    // else printf("%d%di", c.re, c.im);
    return;
}
auto add(complexT c1, complexT c2) {
    complexT sum;
    sum.re = c1.re + c2.re;
    sum.im = c1.im + c2.im;
    return sum;
}
auto multi(complexT c1, complexT c2) {
    complexT prod;
    prod.re = c1.re * c2.re - c1.im * c2.im;
    prod.im = c1.re * c2.im + c1.im * c2.re;
    return prod;
}

int main() {
    cout << "请分别输入两个复数的实部和虚部：";
    cin >> c1.re >> c1.im >> c2.re >> c2.im;
    cout << "相加后的结果为：";
    show(add(c1, c2));
    cout << endl <<  "相乘后的结果为：";
    show(multi(c1, c2));
    cout << endl;
    return 0;
}
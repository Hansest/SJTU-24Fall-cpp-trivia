#include <iostream>
#include "myComplex.h"
using namespace std;

int main() {
    double re1, im1, re2, im2;
    cout << "请分别输入两个复数的实部和虚部：";
    cin >> re1 >> im1 >> re2 >> im2;
    // auto c1 = create(re1, im1), c2 = create(re2, im2);
    auto c1 = complexT(re1, im1), c2 = complexT(re2, im2);
    cout << "相加后的结果为：";
    c1.add(c2).display();
    cout << "相乘后的结果为：";
    c1.multi(c2).display();
    return 0;
}
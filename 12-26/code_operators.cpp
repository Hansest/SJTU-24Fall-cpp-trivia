#include <iostream>
#include <cmath>

using namespace std;

class Complex {
    friend Complex operator+(const Complex &, const Complex &);
    friend Complex operator-(const Complex &, const Complex &);
    friend Complex operator*(const Complex &, const Complex &);
    friend ostream & operator<<(ostream &os, const Complex &obj);
    friend istream & operator>>(istream &is, Complex &obj);

    double re, im;
public:
    Complex(double real = 0.0, double imag = 0.0): re(real), im(imag) {}
};

Complex operator+(const Complex &lhs, const Complex &rhs) {
    return Complex(lhs.re + rhs.re, lhs.im + rhs.im);
}
Complex operator-(const Complex &lhs, const Complex &rhs) {
    Complex neg(-rhs.re, -rhs.im);
    return operator+(lhs, neg);
}
Complex operator*(const Complex &lhs, const Complex &rhs) {
    double re = lhs.re * rhs.re - lhs.im * rhs.im;
    double im = lhs.re * rhs.im + lhs.im * rhs.re;
    return Complex(re, im);
}
ostream& operator<<(ostream &os, const Complex &obj) {
    if (obj.im == 0) { os << obj.re; return os; }
    if (obj.re == 0) { os << obj.im << 'i'; return os; }
    os << obj.re << (obj.im > 0 ? " + " : " - ") << fabs(obj.im) << 'i';
    return os;
}
istream& operator>>(istream &is, Complex &obj) {
    is >> obj.re >> obj.im;
    return is;
}

int main() {
    double re1, im1, re2, im2;
    // Complex c1, c2;
    cout << "请输入第一个复数：\n请输入复数的实部:";
    cin >> re1;
    cout << "请输入复数的虚部:";
    cin >> im1;
    // cin >> c1;
    cout << "请输入第二个复数：\n请输入复数的实部:";
    cin >> re2;
    cout << "请输入复数的虚部:";
    cin >> im2;
    // cin >> c2;

    Complex c1(re1, im1), c2(re2, im2);
    cout << "c1 + c2 = " << c1 + c2 << endl;
    cout << "c1 - c2 = " << c1 - c2 << endl;
    cout << "c1 * c2 = " << c1 * c2 << endl;

    return 0;
}
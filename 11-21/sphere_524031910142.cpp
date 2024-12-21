#include <iostream>
using namespace std;

const double PI = 3.14;
void calSV(double r, double &S, double &V) {
    S = 4 * PI * r * r;
    V = 4 * PI * r * r * r / 3;
}

int main() {
    double r, S, V;
    cout << "请输入球的半径r：";
    cin >> r;
    calSV(r, S, V);
    cout << "球的表面积S为：" << S << "\n球的体积V为：" << V << endl;
}
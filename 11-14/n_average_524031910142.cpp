#include <iostream>

using namespace std;

void calc() {
    static int cnt = 0, sum = 0;
    int now;
    cout << "请输入第" << ++cnt << "个数：";
    cin >> now, sum += now;
    cout << "前面输入" << cnt << "个数的平均值为：" << sum * 1.0 / cnt << endl;
}

int main() {
    int n;
    cout << "请输入整数的数目：";
    cin >> n;
    while (n--) calc();
    return 0;
}
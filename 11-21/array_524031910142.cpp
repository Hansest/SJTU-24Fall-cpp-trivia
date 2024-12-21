#include <iostream>
using namespace std;
int a[6];

int& setValues(int id) {
    return *(a + id);
}

int main() {
    cout << "请输入数组vals的值：";
    int tmp = 0;
    for (int i = 1; i <= 5; i++) {
        cin >> tmp;
        setValues(i) = tmp;
    }
    cout << "赋值后数组的值：";
    for (int i = 1; i <= 5; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}
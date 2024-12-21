#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int m, n;
    cout << "Please input m, n:";
    cin >> m >> n;

    int cnt = 0;
    for (int i = m; i <= n; i++) {
        if (isPrime(i)) cnt++;
    }
    cout << "Count=" << cnt << endl;
    return 0;
}
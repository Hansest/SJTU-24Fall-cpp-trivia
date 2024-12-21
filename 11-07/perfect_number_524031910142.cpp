#include <iostream>

using namespace std;

bool isPerfect(int n) {
    if (n <= 1) return 0;
    int res = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i) continue;
        res += i + n / i;
        if (i == n / i) res -= i;
    }
    if (res == n) return 1;
    return 0;
}

int main() {
    int m, n;
    cout << "Please input m, n:";
    cin >> m >> n;

    cout << "Perfect number in [" << m << "," << n << "]:";
    for (int i = m; i <= n; i++) {
        if (isPerfect(i)) cout << i << ' ';
    }
    cout << endl;
    return 0;
}
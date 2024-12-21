#include<iostream>

using namespace std;
const int N = 1e6 + 5;
int a[N];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    if (a[n] < m) cout << 0 << endl, exit(0);
    for (int k = n - 1; k >= 1; k--) {
        int ok = 0;
        for (int i = 0; i <= n - k; i++) {
            if (a[i + k] - a[i] >= m) {
                ok = 1;
                break;
            }
        }
        if (!ok) cout << k + 1 << endl, exit(0);
    }
    cout << 1 << endl, exit(0);
}
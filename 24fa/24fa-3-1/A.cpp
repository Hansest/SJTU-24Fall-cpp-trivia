#include <iostream>
#include <algorithm>

using namespace std;
const int N = 1e5 + 5;
int a[N];

int main() {
    int n, m, s = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i], s += a[i];
    sort(a, a + n);
    if (s <= m) {
        cout << "infinite" << endl, exit(0);
    }
    for (int i = n - 2; i >= 0; i--) {
        s -= (a[i + 1] - a[i]) * (n - 1 - i);
        if (s <= m) {cout << a[i] << endl, exit(0);}
    }
    cout << m / n << endl;
    return 0;
}
#include <iostream>
using namespace std;
const int N = 105;
bool out[N];
int cnt = 0;

int findMonkeyKing(int n, int m) {
    static int now = 1;
    while (out[now] && now <= n) now++;
    if (now > n) now -= n;
    while (out[now] && now <= n) now++;
    int mm = m;
    while (--mm) {
        now++;
        while (out[now] && now <= n) now++;
        if (now > n) now -= n;
        while (out[now] && now <= n) now++;
    }
    out[now] = 1, cnt++;
    cout << now << ' ';

    if (cnt < n - 1) return findMonkeyKing(n, m);
    if (cnt == n - 1) {
        for (int i = 1; i <= n; i++) {
            if (!out[i]) return i;
        }
        return 1;
    }
    return 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << findMonkeyKing(n, m) << endl;
    return 0;
}
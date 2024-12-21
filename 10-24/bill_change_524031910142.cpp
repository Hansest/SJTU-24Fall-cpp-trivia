#include <iostream>

using namespace std;
const int val[] = {1, 5, 16, 23, 33};

int main() {
    int n, res = 100;
    cin >> n;
    for (int a = 0; a <= n / val[0]; a++) {
        for (int b = 0; b <= n / val[1]; b++) {
            for (int c = 0; c <= n / val[2]; c++) {
                for (int d = 0; d <= n / val[3]; d++) {
                    for (int e = 0; e <= n / val[4]; e++) {
                        if (a * val[0] + b * val[1] + c * val[2] + d * val[3] + e * val[4] == n) {
                            res = min(res, a + b + c + d + e);
                        }
                    }
                }
            }
        }
    }
    cout << res << endl;

    int nn = n;
    res = 0;
    for (int i = 4; i >= 0; i--) {
        res += n / val[i];
        n -= n / val[i] * val[i];
        if (n == 0) {
            cout << res << endl;
            break;
        }
    }

    const int N = 105;
    int ans[N] = {0};
    for (int i = 0; i < 5; i++)
        ans[val[i]]++;
    n = nn;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < val[j]) continue;
            if (ans[i - val[j]] == 0 && i != val[j]) continue;
            
            if (ans[i] == 0) ans[i] = ans[i - val[j]] + 1;
            else ans[i] = min(ans[i], ans[i - val[j]] + 1);
        }
    }
    cout << ans[n] << endl;

    return 0;
}
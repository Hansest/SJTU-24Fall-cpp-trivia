#include <iostream>

using namespace std;

int main() {
    int k, ans = 0;
    cout << "Input the change:";
    cin >> k;

    for (int i = 1; i <= k / 5; i++) {
        int kk = k - 5 * i;
        for (int j = 1; j <= kk / 2; j++) {
            if (kk - 2 * j > 0) ans++;
        }
    }

    cout << "Methods=" << ans << endl;
    return 0;
}
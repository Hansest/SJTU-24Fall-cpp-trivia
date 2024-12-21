#include <iostream>
#include <algorithm>

using namespace std;
const int N = 205;
int n, k, m, base, hour, ans[N];
double score[N], heap[N];
bool vis[N];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> m;
        double res = 0;
        for (int j = 0; j < m; j++) {
            cin >> hour;
            if (hour <= 48) {
                res += 100.0 * 48 / hour;
            } else {
                cin >> base;
                res += base - k * (hour - 48);
            }
        }
        score[i] = res / m;
    }

    for (int i = 0; i < n; i++)
        heap[i] = score[i];
    sort(heap, heap + n, greater<double>());

    // for (int i = 0; i < n; i++)
    //     cout << score[i] << ' ';
    // cout << endl;

    // for (int i = 0; i < n; i++)
    //     cout << heap[i] << ' ';
    // cout << endl;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!vis[j] && heap[i] == score[j]) {
                ans[i] = j + 1, vis[j] = 1;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    cout << endl;

    return 0;
}
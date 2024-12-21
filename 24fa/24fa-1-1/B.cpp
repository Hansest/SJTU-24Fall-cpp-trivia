#include <iostream>
#include <algorithm>
#include <utility>
#include <map>

using namespace std;
const int N = 1e5 + 5;
pair<int, int> res[N];
map<int, int> bucket;
bool vis[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> res[i].first >> res[i].second;
        bucket[res[i].first]++, bucket[res[i].second]++;
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (vis[i]) continue;
        int pt = res[i].first;
        for (int j = res[i].first; j <= res[i].second; j++) {
            if (bucket[j] > bucket[pt]) pt = j;
        }
        for (int j = 0; j < n; j++) {
            if (!vis[j] && res[j].first <= pt && pt <= res[j].second) {
                for (int k = res[j].first; k <= res[j].second; k++) {
                    if (bucket[k]) bucket[k]--;
                }
                vis[j] = 1;
            }
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string sub[35000];
int cnt = 1;
void subGen(int n, string t) {
    if (n >= (int)t.size()) return;
    int now = cnt;
    for (int i = 0; i < now; i++) {
        sub[cnt++] = sub[i] + t[n];
    }
    subGen(n + 1, t);
}

void check(int &ans) {
    for (int i = 0; i < cnt; i++) {
        bool ok = 1;
        int l = sub[i].size();
        for (int j = 0; j < l / 2; j++) {
            if (sub[i][j] != sub[i][l - j - 1]) {ok = 0; break;}
        }
        if (ok) ans++;
    }
}

int main() {
    string t;
    cin >> t;
    sub[cnt++] += t[0], subGen(1, t);
    cout << cnt << endl;
    int ans = 0;
    check(ans);
    cout << ans - 1 << endl;
}
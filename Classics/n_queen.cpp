#include<iostream>
using namespace std;

const int N = 12;
int n, ans;
bool r[N], c[N], diag[2][2 * N];

void solve(int row) {
    if (row > n) { ans++; return; }
    for (int j = 1; j <= n; j++) {
        if (r[row] || c[j] || diag[0][row + j - 1] || diag[1][n - row + j]) continue;
        r[row] = 1, c[j] = 1, diag[0][row + j - 1] = 1, diag[1][n - row + j] = 1;
        solve(row + 1);
        r[row] = 0, c[j] = 0, diag[0][row + j - 1] = 0, diag[1][n - row + j] = 0;
    }
}

int main()
{
    cin >> n;
    solve(1);
    cout << ans;
}
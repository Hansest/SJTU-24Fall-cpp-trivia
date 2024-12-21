#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    const int N = 12;
    int a[N][N], maxv[N], m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        scanf("%d", a[i]);
        maxv[i] = a[i][0];
        for (int j = 1; j < n; j++) {
            scanf("%d", &a[i][j]);
            maxv[i] = max(maxv[i], a[i][j]);
        }
    }

    bool flag = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != maxv[i]) continue;
            bool ok = 1;
            for (int k = 0; k < m; k++) {
                if (a[i][j] > a[k][j]) {
                    ok = 0;
                    break;
                }
            }
            if (ok) printf("Mat[%d][%d]=%d\n", i, j, a[i][j]), flag = 1;
        }
    }
    if (!flag) printf("Not Found");
    return 0;
}
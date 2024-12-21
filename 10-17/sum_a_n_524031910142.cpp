#include <iostream>

using namespace std;

int main() {
    int now = 1, ans = 0;
    for (int i = 1; i <= 10; i++) {
        now *= i;
        ans += now;
    }
    cout << ans << endl;
    return 0;
}
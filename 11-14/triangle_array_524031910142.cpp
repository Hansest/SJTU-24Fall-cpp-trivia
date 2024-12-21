#include <iostream>

using namespace std;
const int N = 21;
int arr[N][N], n;

int Recursion(int r, int c, int arr[N][N]) {
    if (r == n || arr[r][c]) return arr[r][c];
    return arr[r][c] = Recursion(r + 1, c, arr) + Recursion(r + 1, c + 1, arr);
}

int main() {
    cout << "请输入三角形行数：";
    cin >> n; 
    cout << "请输入三角形的最后一行元素：";
    for (int i = 1; i <= n; i++)
        cin >> *(arr[n] + i);
    
    Recursion(1, 1, arr);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) 
            cout << arr[i][j] << ' ';
        cout << endl;
    }
    return 0;
}

/*
48 = 20 + 28
   = 8 + 12 * 2 + 16
   = 3 + 5 * 3 + 7 * 3 + 9
   = 1 + 2 * 4 + 3 * 6 + 4 * 4 + 5
*/
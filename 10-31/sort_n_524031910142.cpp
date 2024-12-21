#include <iostream>
#include <algorithm>
#include <random>
using namespace std;

const int N = 1e5 + 5;
int a[N];

void BubbleSort(int a[], int l) {
    bool sorted = 1;
    for (int i = 0; i < l; i++) {
        for (int j = 1; j < l - i; j++) {
            if(a[j] < a[j - 1]) swap(a[j], a[j - 1]), sorted = 0;
        }
        if (sorted) return;
    }
}

void SelectionSort(int a[], int l) {
    for (int i = 0; i < l; i++) {
        int pos = i;
        for (int j = i; j < l; j++) {
            if (a[j] < a[pos]) pos = j;
        }
        swap(a[pos], a[i]);
    }
}

void QuickSort(int a[], int l, int r) {
    if (l >= r) return;
    int p = l, q = r, mid = a[l + (r - l) / 2];
    while (p <= q) {
        while (a[p] < mid && p <= r) p++;
        while (a[q] > mid && q >= l) q--;
        if (p <= q) swap(a[p++], a[q--]);
    }
    if (l < q) QuickSort(a, l, q);
    if (p < r) QuickSort(a, p, r);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    BubbleSort(a, n);
    for (int i = 0; i < n; i++) 
        cout << a[i] << ' ';
    cout << endl;

    std::random_device rd;
    std::mt19937 g(rd());
    shuffle(a, a + n, g);
    SelectionSort(a, n);
    for (int i = 0; i < n; i++) 
        cout << a[i] << ' ';
    cout << endl;

    shuffle(a, a + n, g);
    QuickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) 
        cout << a[i] << ' ';
    cout << endl;

    return 0;
}
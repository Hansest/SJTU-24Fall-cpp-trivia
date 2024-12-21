#include <iostream>

using namespace std;
const int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeap(int yr) {
    if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0) return 1;
    return 0;
}

int main() {
    int n;
    cin >> n;

    int year = 1900, day = 13 % 7, stat[7] = {0};
    stat[day]++;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 12; j++) {
            if (i == n - 1 && j == 12) break;

            int diff = month[j];
            if (j == 2 && isLeap(year + i)) diff++;

            day = (day + diff) % 7;
            stat[day]++;
        }
    }

    for (int i = 1; i < 7; i++) {
        cout << stat[i] << ' ';
    }
    cout << stat[0] << endl;
    return 0;
}
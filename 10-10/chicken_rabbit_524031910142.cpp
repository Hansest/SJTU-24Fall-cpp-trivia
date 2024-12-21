#include <iostream>

using namespace std;
int n, m, chicken, rabbit;

int main() {
    cout << "请输入n,m:";
    cin >> n >> m;

    // if (m % 2 || m < 2 * n || m > 4 * n)
    //     cout << "无解" << endl;
    // else {
    //     rabbit = m / 2 - n;
    //     chicken = n - rabbit;
    //     cout << "鸡:" << chicken << ",兔:" << rabbit << endl;
    // }

    if (m & 1)
        cout << "无解" << endl, exit(0);

    rabbit = m / 2 - n;
    chicken = n - rabbit;
    
    if (rabbit > 0 && chicken > 0) 
        cout << "鸡:" << chicken << ",兔:" << rabbit << endl;
    else 
        cout << "无解" << endl;
        
    return 0;
}
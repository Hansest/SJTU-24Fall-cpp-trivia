#include <iostream>
#include <cstring>
using namespace std;

const int MAX_LEN = 1000;

int minlen(char *str[], int n) {
    int ans = MAX_LEN;
    for (int i = 0; i < n; i++) {
        ans = min(ans, (int)strlen(str[i]));
    }
    return ans;
}

int main() 
{
    int n;
    char *str[MAX_LEN], buf[MAX_LEN];
    cout << "请输入字符串个数:";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> buf;
        str[i] = new char[sizeof(char) * strlen(buf)];
        strcpy(str[i], buf);
    }
    cout << minlen(str, n) << endl;
    
    for (int i = 0; i < n; i++) {
        delete [] str[i];
    }
    return 0;
}
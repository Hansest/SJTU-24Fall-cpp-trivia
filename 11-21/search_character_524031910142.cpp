#include <iostream>
#include <cstring>
#include <string>
using namespace std;

char *mystrrchr(char *str, char ch) {
    int l = strlen(str), pos = -1;
    for (int i = l - 1; i >= 0; i--) {
        if (str[i] != ch) continue;
        pos = i; break;
    }
    if (pos == -1) return nullptr;
    return str + pos;
}

int main() {
    const int N = 105;
    char s[N], ch;
    cout << "请输入字符串：";
    cin.getline(s, 100);
    cout << "请输入字符：";
    ch = cin.get();
    char *iter = mystrrchr(s, ch);
    if (iter) cout << iter << endl;
    else cout << "Not Found" << endl;
}

/*
Dynamic Memory Allocation
    int *num=new int[n];
    delete [] num;
*/
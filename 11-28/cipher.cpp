#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--) {
        string txt, key;
        cin >> txt >> key;
        string code(txt.size(), ' ');
        string::iterator p = txt.begin(), q = key.begin(), s = code.begin();
        while (p != txt.end()) {

            *s = *p - 'a' + *q - '0';
            if (*s >= 26) *s -= 26;
            *s += 'a';

            // *s = *p + *q - '0';
            // if (*s - 'a' >= 26) *s -= 26;

            p++, q++, s++;
            if (q == key.end()) q = key.begin();
        }
        cout << code << endl;
    }
}
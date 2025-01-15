#include <iostream>
#include <cstring>
using namespace std;

//========begin=======
class mystack
{
};
//========begin=======



//=========end========

int main()
{
    const char* words[] = {"int", "short", "long", "if", "else"};
    const char str[] = "els";
    bool flag = true;
    for (auto s: words) {
        if (strcmp(str, s) == 0) flag = false;
    }
    cout << flag << endl;
    return 0;
}
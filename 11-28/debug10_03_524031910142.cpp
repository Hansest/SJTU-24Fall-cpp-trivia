#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int i, j, n = 0;
    char *city[30], str[30], *temp;

    //input
    cout << "Please input the names of several cities, one city per line"
         << "(@--end).\n";
    cin >> str;
    while (str[0] != '@')
    {
        city[n] = new char[sizeof(char) * (strlen(str) + 1)];
        strcpy(city[n++], str);
        cin >> str;
    }

    //sort
    for (i = 1; i < n; i++) //设置断点
    {
        for (j = 0; j < n - i; j++)
        {
            if (strcmp(city[j], city[j + 1]) > 0) //设置断点
            {
                temp = city[j]; //设置断点
                city[j] = city[j + 1];
                city[j + 1] = temp;
            }
        }
    }

    //output
    for (int i = 0; i < n; i++)
    {
        cout << city[i] << endl;
        delete [] city[i];
    }

    return 0;
}

/*
char ach1[] = "Hello";
string str1(ach1); // 将字符数组转换为string
string str2 = ach1;

char ach3[20];
strcpy(ach3, str1.c_str()); // 将string转换为字符数组

下面是一个使用 ostringstream 将数据写入字符串的例子：
#include <iostream>
#include <sstream>

int main() {
    std::ostringstream oss;
    int i = 100;
    double d = 200.5;

    oss << i << " " << d;

    std::string result = oss.str();
    std::cout << "Resulting string: " << result << std::endl;

    return 0;
}
*/
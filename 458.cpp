#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char str[100000];
    while(gets(str)){
        int len = strlen(str);
        for(int i = 0; i < len; i++){
            str[i] = str[i] - 7;
        }
        for(int i = 0; i < len; i++){
            cout << str[i];
        }
        cout << endl;
    }

    return 0;
}

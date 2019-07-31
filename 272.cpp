#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    long int i, len, cnt = 0;
    char s[1005];
    while(gets(s)){
        len = strlen(s);
        for(i = 0; i < len; i++){
            if(s[i] == '"'){
                cnt++;
                if(cnt % 2 == 0)
                    printf("''");
                else
                    printf("``");
            }
            else
                printf("%c", s[i]);
        }
        cout << endl;
    }

    return 0;
}

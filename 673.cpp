#include <bits/stdc++.h>

using namespace std;

string str;

void Solve ()
{
    stack <char> stk;
    for (int i = 0; i < (int) str.size(); i++) {
        if (!i) stk.push(str[i]);

        else if (str[i] == ')') {
            if (!stk.empty() && stk.top() == '(')
                    stk.pop();
            else stk.push(str[i]);
        }

        else if (str[i] == ']') {
            if (!stk.empty() && stk.top() == '[')
                stk.pop();
            else stk.push(str[i]);
        }

        else stk.push(str[i]);
    }
    if (stk.empty()) puts("Yes");
    else puts("No");
}

int main ()
{
    int T;
    scanf("%d", &T);
    getchar();
    while (T--) {
        getline(cin, str);
        Solve();
    }

    return 0;
}

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        int ans = a * b;
        cout << (ans * 2) << endl;
    }

    return 0;
}

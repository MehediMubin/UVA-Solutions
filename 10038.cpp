#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n, i;
    while(scanf("%d", &n) == 1){
        int arr[n], dif[n];
        bool b = true;
        for(i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(i = 0; i < n - 1; i++){
            dif[i] = abs(arr[i + 1] - arr[i]);
        }
        sort(dif, dif + n - 1);
        for(i = 0; i < n - 1; i++){
            if(dif[i] != i + 1)
                b = false;
        }
        if(b == false)
            cout << "Not jolly" << endl;
        else
            cout << "Jolly" << endl;
    }

    return 0;
}

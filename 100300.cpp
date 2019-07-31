#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int T, f, a, b, c, ans = 0;
    cin >> T;
    while(T--){
        cin >> f;
        for(int i = 0; i < f; i++){
            double d = 0.00;
            int res = 0;
            cin >> a >> b >> c;
            d = a / (double)b;
            d *= (double)c;
            d *= (double)b;
            res = ceil(d);
            ans += res;
        }
        cout << ans << endl;
        ans = 0;
    }

    return 0;
}

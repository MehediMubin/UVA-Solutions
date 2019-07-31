#include <iostream>

using namespace std;

int main()
{
    int T, i, a, b, ans;
    cin >> T;
    for(i = 0; i < T; i++){
        ans = 0;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            if(j % 2 == 1)
                ans += j;
        }
        cout << "Case " << (i + 1) << ": " << ans << endl;
    }

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int T, a, b, c;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> a >> b >> c;
        if(a < b){
            if(a > c)
                cout << "Case " << (i + 1) << ": " << a << endl;
        }
        if(a > b){
            if(a < c)
                cout << "Case " << (i + 1) << ": " << a << endl;
        }
        if(b < a){
            if(b > c)
                cout << "Case " << (i + 1) << ": " << b << endl;
        }
        if(b > a){
            if(b < c)
                cout << "Case " << (i + 1) << ": " << b << endl;
        }
        if(c > a){
            if(c < b)
                cout << "Case " << (i + 1) << ": " << c << endl;
        }
        if(c < a){
            if(c > b)
                cout << "Case " << (i + 1) << ": " << c << endl;
        }

    }

    return 0;
}


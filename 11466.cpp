#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MAX 100000000

ll marked[MAX + 5];

bool isPrime (ll n)
{
    if (n == 1) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0) return 0;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void PrimeDiv (ll n)
{
    ll cnt = 0, div = 0, s;
    ll sq = (ll)sqrt(n);
    for (ll i = 2; i <= sq; i++) {
        if (n % i == 0) {
            if (i * i == n) {
                if (isPrime(i)) {
                    cnt++;
                    div = max(div, i);
                }
            }
            else if (isPrime(i)) {
                if (isPrime(n/i)) {
                    cnt += 2;
                    s = max(i, n/i);
                    div = max(div, s);
                }
                else {
                    cnt++;
                    div = max(div, i);
                }
            }
            else {
                if (isPrime(n/i)) {
                    cnt++;
                    div = max(div, n / i);
                }
            }
        }

    }
    if (cnt > 1)
        printf("%lld\n", div);
    else
        printf("%d\n", -1);
}

int main ()
{
    ll n;
    while (scanf("%lld", &n) != EOF) {
        if (n == 0) break;
        if (n < 0) n *= -1;
        PrimeDiv(n);
    }

    return 0;
}

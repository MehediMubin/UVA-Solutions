#include <bits/stdc++.h>

using namespace std;

bool isPrime (int n)
{
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main ()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        if (!isPrime(n))
            printf("%d is not prime.\n", n);
        else if (isPrime(n)) {
            int rem, sum = 0, temp = n;
            while (temp != 0) {
                rem = temp % 10;
                sum = sum * 10 + rem;
                temp /= 10;
            }
            if (isPrime(sum) && sum != n)
                printf("%d is emirp.\n", n);
            else
                printf("%d is prime.\n", n);
        }
    }

    return 0;
}

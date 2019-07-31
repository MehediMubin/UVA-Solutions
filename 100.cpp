#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a, b, i, j, count, temp = 0, change, temp_a, temp_b;
    while(scanf("%d %d", &a, &b) != EOF){
        temp_a = a;
        temp_b = b;
        if(a > b){
            change = a;
            a = b;
            b = change;
        }
        for(i = a; i <= b; i++){
            count = 1;
            j = i;
            while(j != 1){
                if(j % 2 == 1)
                    j = (j * 3) + 1;
                else if(j % 2 == 0)
                    j /= 2;
                count++;
            }
            if(count > temp)
                temp = count;
        }
        cout << temp_a << " " << temp_b << " " << temp << endl;
        temp = 0;
    }

    return 0;
}

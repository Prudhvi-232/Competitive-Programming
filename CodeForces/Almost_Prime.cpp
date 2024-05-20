#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int primes = 0;
    while (n--)
    {
        primes = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                primes++;
            }
        }
        if(primes==4){
            count++;
        }
    }
    cout << count;
}

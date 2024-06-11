#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum, maxsum = 0,z=0;
        for (int i = 2; i <= n; i++)
        {
            sum = 0;
            int k = 1;
            while (i * k <= n)
            {
                sum = sum + i * k;
                k++;
            }
            if(sum>maxsum){
                maxsum = sum;   
                z = i;
            }
        }
        cout << z << endl;
    }
}

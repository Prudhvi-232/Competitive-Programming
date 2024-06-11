#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            a = max(abs(a + x), abs(x));
            b += x;
        }
        cout << max(abs(a), abs(b)) << endl;
    }
    return 0;
}

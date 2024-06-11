#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;

        // Check if the last digit is 9
        if (x % 10 == 9)
        {
            cout << "NO\n";
            continue;
        }

        // Check if the number is in the range [10, 18]
        if (x >= 10 && x <= 18)
        {
            cout << "YES\n";
            continue;
        }

        // Check if the number is less than or equal to 99
        if (x <= 99)
        {
            cout << "NO\n";
            continue;
        }

        // Check if the number has any zero digit except the last one
        long long temp = x / 10;
        bool flag = true;
        while (temp > 9)
        {
            int last = temp % 10;
            if (last == 0)
            {
                flag = false;
                break;
            }
            temp = temp / 10;
        }

        // Check if the first digit is 1 and there are no zero digits in between
        if (flag && temp == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

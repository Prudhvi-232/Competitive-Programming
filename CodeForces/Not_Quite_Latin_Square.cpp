#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        map<char, int> mat;
        for (int i = 0; i < 3; i++)
        {
            cin >> a;
            mat[a[0]]++;
            mat[a[1]]++;
            mat[a[2]]++;
        }
        for (auto i : mat)
        {
            if (i.second == 2)
            {
                cout << i.first << endl;
                break;
            }
        }
    }
}

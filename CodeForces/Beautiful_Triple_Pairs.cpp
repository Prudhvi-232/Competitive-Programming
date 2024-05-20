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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector < array<int, 3>> b;
        for (int i = 0; i < n - 2; i++)
        {
            array<int, 3> temp = {a[i], a[i + 1], a[i + 2]};
            b.push_back(temp);
        }
        int count = 0;
        for (int i = 0; i < n-2 ; i++)
        {
            for (int j = i + 1; j < n-2 ; j++)
            {
                if(b[i][0]!=b[j][0] && b[i][1]==b[j][1] && b[i][2]==b[j][2]){
                    count++;
                }
                else if(b[i][0]==b[j][0] && b[i][1]!=b[j][1] && b[i][2]==b[j][2]){
                    count++;
                }
                else if(b[i][0]==b[j][0] && b[i][1]==b[j][1] && b[i][2]!=b[j][2]){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}

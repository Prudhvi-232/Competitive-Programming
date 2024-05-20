#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, T;
    cin >> S >> T;
    int count = 0;
    // Iterate over all possible values of a, b, c
    for (int a = 0; a <= S; ++a) {
        for (int b = 0; b <= S; ++b) {
            for (int c = 0; c <= S; ++c) {
                if (a + b + c <= S && a * b * c <= T) {
                    ++count;
                }
            }
        }
    }
    cout << count;
}

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the typing time of a string
int calculateTypingTime(string s) {
    int n = s.length();
    if (n == 0) return 0;
    int time = 2; // Time to type the first character
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i-1]) {
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}

void solve() {
    string s;
    cin >> s;
    int max_time = 0;
    string result;

    // Try inserting each lowercase letter at each position
    for (int i = 0; i <= s.length(); ++i) {
        for (char c = 'a'; c <= 'z'; ++c) {
            string temp = s.substr(0, i) + c + s.substr(i);
            int typing_time = calculateTypingTime(temp);
            if (typing_time > max_time) {
                max_time = typing_time;
                result = temp;
            }
        }
    }
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

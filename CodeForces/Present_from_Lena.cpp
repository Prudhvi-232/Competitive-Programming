#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Total number of rows
    n = n * 2 + 1;
    // Top half of the diamond (including the middle row)
    for (int i = 0; i < n / 2 + 1; i++) {
        // Print leading spaces
        for (int j = 0; j < n / 2 - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 0; j < i + 1; j++) {
            // cout << j << " ";
            if(j==0 && i==0)cout << j ;
            else cout<<j<<" ";
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 0; j--) {
            if(j==0)cout << j ;
            else cout<<j<<" ";
        }

        // Move to the next line
        cout << endl;
    }

    // Bottom half of the diamond (excluding the middle row)
    for (int i = n / 2 - 1; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n / 2 - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 0; j < i + 1; j++) {
            // cout << j << " ";
            if(j==0 && i==0)cout << j ;
            else cout<<j<<" ";
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 0; j--) {
            // cout << j << " ";
            if(j==0)cout << j ;
            else cout<<j<<" ";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}

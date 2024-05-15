#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string cfl(string s) {
    if (!s.empty()) {
        s[0] = toupper(s[0]);
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    string cl = cfl(s);
    cout <<cl << endl;

    return 0;
}

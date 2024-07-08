#include <bits/stdc++.h>
#define int long long
#define e endl;
#define yes cout << "YES\n" << endl;
#define no cout << "NO\n" << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;

    int tot = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tot += a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int la = -1, lb = -1, lc = -1;
    int ra = -1, rb = -1, rc = -1;
    int i = 0;
    la = 1;
    int sum = 0;
    
    // First set of attempts
    while (i < n) {
        sum += a[i];
        if (sum >= (tot + 2) / 3) {
            ra = i + 1;
            break;
        }
        i++;
    }
    i++;
    lb = i + 1;
    int temp = i;
    sum = 0;
    while (i < n) {
        sum += b[i];
        if (sum >= (tot + 2) / 3) {
            rb = i + 1;
            break;
        }
        i++;
    }
    i++;
    lc = i + 1;
    sum = 0;
    bool flag = false;
    while (i < n) {
        sum += c[i];
        if (sum >= (tot + 2) / 3) {
            rc = i + 1;
            flag = true;
            break;
        }
        i++;
    }

    if (flag) rc = n;

    if (ra != -1 && rb != -1 && rc != -1 && la != -1 && lb != -1 && lc != -1) {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }

    lb = -1, lc = -1, rb = -1, rc = -1;
    i = temp;
    lc = i + 1;
    sum = 0;
    while (i < n) {
        sum += c[i];
        if (sum >= (tot + 2) / 3) {
            rc = i + 1;
            break;
        }
        i++;
    }
    i++;
    lb = i + 1;
    sum = 0;
    flag = false;
    while (i < n) {
        sum += b[i];
        if (sum >= (tot + 2) / 3) {
            rb = i + 1;
            flag = true;
            break;
        }
        i++;
    }

    if (flag) rb = n;

    if (ra != -1 && rb != -1 && rc != -1 && la != -1 && lb != -1 && lc != -1) {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }

    la = -1, lb = -1, lc = -1;
    ra = -1, rb = -1, rc = -1;
    i = 0;
    lb = 1;
    sum = 0;
    while (i < n) {
        sum += b[i];
        if (sum >= (tot + 2) / 3) {
            rb = i + 1;
            break;
        }
        i++;
    }
    i++;
    lc = i + 1;
    temp = i;
    sum = 0;
    while (i < n) {
        sum += c[i];
        if (sum >= (tot + 2) / 3) {
            rc = i + 1;
            break;
        }
        i++;
    }
    i++;
    la = i + 1;
    sum = 0;
    flag = false;
    while (i < n) {
        sum += a[i];
        if (sum >= (tot + 2) / 3) {
            ra = i + 1;
            flag = true;
            break;
        }
        i++;
    }

    if (flag) ra = n;

    if (ra != -1 && rb != -1 && rc != -1 && la != -1 && lb != -1 && lc != -1) {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }

    la = -1, lc = -1, ra = -1, rc = -1;
    i = temp;
    la = i + 1;
    sum = 0;
    while (i < n) {
        sum += a[i];
        if (sum >= (tot + 2) / 3) {
            ra = i + 1;
            break;
        }
        i++;
    }
    i++;
    lc = i + 1;
    sum = 0;
    flag = false;
    while (i < n) {
        sum += c[i];
        if (sum >= (tot + 2) / 3) {
            rc = i + 1;
            flag = true;
            break;
        }
        i++;
    }

    if (flag) rc = n;

    if (ra != -1 && rb != -1 && rc != -1 && la != -1 && lb != -1 && lc != -1) {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }

    la = -1, lb = -1, ra = -1, rb = -1;
    i = temp;
    lb = i + 1;
    sum = 0;
    while (i < n) {
        sum += b[i];
        if (sum >= (tot + 2) / 3) {
            rb = i + 1;
            break;
        }
        i++;
    }
    i++;
    la = i + 1;
    sum = 0;
    flag = false;
    while (i < n) {
        sum += a[i];
        if (sum >= (tot + 2) / 3) {
            ra = i + 1;
            flag = true;
            break;
        }
        i++;
    }

    if (flag) ra = n;

    if (ra != -1 && rb != -1 && rc != -1 && la != -1 && lb != -1 && lc != -1) {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }

    cout << -1 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

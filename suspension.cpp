#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, y, r;
        cin >> n >> y >> r;
        cout << min(n, r + y / 2) << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(n == 2) {
            cout << "-1 2\n";
            continue;
        }

        for(int i = 1; i <= n; i++) {
            if(i == n && n % 2 == 0)
                cout << 2 << " ";
            else if(i % 2)
                cout << -1 << " ";
            else
                cout << 3 << " ";
        }

        cout << "\n";
    }

    return 0;
}
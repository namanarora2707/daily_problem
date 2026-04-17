#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        int sum = 0, x;
        for(int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }

        if(sum % 2 == 1) {
            cout << "YES\n";
        } 
        else if(n % 2 == 1 && k % 2 == 1) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
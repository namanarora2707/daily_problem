#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        long long k = a / b;         
        long long ans = (n + k - 1) / k;  

        cout << ans << "\n";
    }
    return 0;
}

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
        vector<long long> a(n);
        
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        sort(a.begin(), a.end());

        if(n == 2) {
            cout << a[1] - a[0] << "\n";
        } else {
            long long maxVal = a[n-1];
            long long minVal = a[0];
            cout << maxVal - (sum - maxVal - minVal) << "\n";
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> ans;

    while(t--) {
        int n;
        cin >> n;

        int a[11], b[11];

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int dec = 0, inc = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] > b[i]) dec += a[i] - b[i];
            else inc += b[i] - a[i];
        }

        ans.push_back(min(dec, inc) + 1);
    }

    for(int x : ans) cout << x << endl;
}
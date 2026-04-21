#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        if(n == 1){
            cout << 1 << "\n";
            continue;
        }

        for(int i = 0; i < n; i++){
            int L = p[i] - 1;
            int R = n - p[i];

            int k = min(L, R);
            int ans = 1 + 2 * k;

            if(L == R) ans--;   
            ans = max(ans, 2);

            cout << ans << " ";
        }

        cout << "\n";
    }
}
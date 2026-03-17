#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        int ans = 0;

        for(int i=0;i<n;i++){
            long long x = -a[i]; // try making a[i] → 0

            unordered_set<long long> s;

            for(int j=0;j<n;j++){
                long long val = a[j] + x;
                if(val >= 0) s.insert(val);
            }

            int mex = 0;
            while(s.count(mex)) mex++;

            ans = max(ans, mex);
        }

        cout << ans << "\n";
    }
}
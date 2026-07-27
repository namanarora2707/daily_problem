#include<bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while (T--) {
        int n;
        cin>>n;

        int64 sumA =0,sumB = 0 ;
        int64 minA= LLONG_MAX,minB = LLONG_MAX;
        
        for(int i = 0;i < n; i++){
            int64 x;
            cin>> x;
            sumA += x;
            minA = min(minA , x);

        }
        for(int i=0;i<n;i++){
            int64 x;
            cin>>x;
            sumB += x;
            minB =  min(minB,x);
        }

        int64 ans = min(sumB + 1LL * n * minA,sumA+1LL * n* minB);

        cout << ans << '\n';
    }
    return 0;
}
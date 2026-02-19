#include <bits/stdc++.h>
using namespace std;

bool can(vector<long long>& a, long long x){
    int n = a.size();
    int need = (n + 1) / 2 - 1;
    int forced = 0, flex = 0;

    for(int i = 1; i < n; i++){
        long long v = llabs(a[i]);

        bool c1 = (-v < x); 
        bool c2 = (v < x);  

        if(c1 && c2) forced++;
        else if(!c1 && !c2) {

        }
        else flex++;
    }

    return (forced <= need && need <= forced + flex);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(auto &x: a) cin >> x;

        long long x1 = a[0];
        long long x2 = -a[0];

        if(can(a, x1) || can(a, x2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

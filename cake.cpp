#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        int n;
        ll m;
        cin >> n >> m;

        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        priority_queue<pair<ll,pair<ll,ll>>> pq;

        for(int i=0;i<n;i++)
            pq.push({a[i]*m,{a[i],m}});

        ll ans=0;

        for(int step=0; step<m; step++){
            auto top=pq.top();
            pq.pop();

            ll val=top.first;
            ll a=top.second.first;
            ll k=top.second.second;

            ans+=val;

            if(k>1)
                pq.push({a*(k-1),{a,k-1}});
        }

        cout<<ans<<"\n";
    }
}
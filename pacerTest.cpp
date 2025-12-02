#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;

while(t--){
    long long n,m;
    cin>>n>>m;

    vector<pair<long long,int>> req(n);
    for(int i=0;i<n;i++){
        cin>>req[i].first>>req[i].second;
    }
    long long ans =0;

    long long prev_time =0;
    int prev_side=0;

    for(int i=0;i<n;i++){
        long long cur_time =req[i].first;
        int cur_side = req[i].second;

        long long dt = cur_time - prev_time;
        int need = (prev_side != cur_side ? 1:0);

        long long moves =dt;
        if((moves%2)!=need)
        moves--;

        if(moves<need) moves = need;

        ans+=moves;

        prev_time = cur_time;
        prev_side = cur_side;
    }
    long long dt = m-prev_time;
    ans+= dt;
    cout<<ans<<"\n";
}
return 0;

}
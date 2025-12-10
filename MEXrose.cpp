#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if(!(cin>>t))return 0;
    while (t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;++i)cin>>a[i];
        vector<int> freq(n+1,0);
        for(int x:a){
            if(0<=x && x<=n) freq[x]++;

        }
        int missing=0;
        for(int i=0;i<k;++i){
            if(freq[i]==0) ++missing;

        }
        int cnt_k =freq[k];
        int answer =max (missing,cnt_k );
        cout<<answer<<'\n';
    }
    return 0;
}
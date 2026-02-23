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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

     
        vector<int> freq;
        int cnt = 1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]) cnt++;
            else{
                freq.push_back(cnt);
                cnt = 1;
            }
        }
        freq.push_back(cnt);

        int ans = 0;
        int maxf = *max_element(freq.begin(), freq.end());

        for(int x=1; x<=maxf; x++){
            int c = 0;
            for(int f: freq)
                if(f >= x) c++;
            ans = max(ans, c * x);
        }

        cout << ans << "\n";
    }
}
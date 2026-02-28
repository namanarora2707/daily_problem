#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        string t = s;
        sort(t.begin(), t.end());

        int mismatches = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != t[i]) mismatches++;
        }

        cout << mismatches / 2 << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        string r;
        cin >> r;
        int n = r.size();

        int total_u = 0;
        for(char c: r) if(c=='u') total_u++;

        int centers = 0;
        int last = -1000000000;

        for(int i = 1; i < n-1; i++){
            if(r[i]=='u' && i - last >= 2){
                centers++;
                last = i;
            }
        }

        cout << total_u - centers << "\n";
    }
}

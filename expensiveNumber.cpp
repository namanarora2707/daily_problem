#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int zeros = 0;
        int best = 0;

        for(char c : s){
            if(c == '0'){
                zeros++;
            } else {
                best = max(best, zeros + 1);
            }
        }

        cout << s.size() - best << "\n";
    }
}

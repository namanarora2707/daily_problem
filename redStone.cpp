#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> ans;

    while(t--) {
        int n;
        cin >> n;

        map<int,int> freq;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        bool ok = false;
        for(auto p : freq) {
            if(p.second >= 2) {
                ok = true;
                break;
            }
        }

        if(ok) ans.push_back("YES");
        else ans.push_back("NO");
    }

    // print all answers at the end
    for(string s : ans) {
        cout << s << endl;
    }

    return 0;
}
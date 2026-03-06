#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<string> ans;

    while(t--){
        long long n, a, b;
        cin >> n >> a >> b;

        if(a == n && b % 2 == 1)
            ans.push_back("NO");
        else
            ans.push_back("YES");
    }

    for(string x : ans)
        cout << x << endl;

    return 0;
}
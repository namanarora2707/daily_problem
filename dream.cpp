#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        int x = c - a;
        int y = d - b;

        bool first = (a <= 2*(b+1) && b <= 2*(a+1));
        bool second = (x <= 2*(y+1) && y <= 2*(x+1));

        if(first && second) cout << "YES\n";
        else cout << "NO\n";
    }
}
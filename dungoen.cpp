#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        map<int,int> freq;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int ans = 0;

        for(auto it : freq) {
            int num = it.first;
            int f = it.second;

            if(f < num)
                ans += f;
            else if(f > num)
                ans += (f - num);
        }

        cout << ans << endl;
    }

    return 0;
}
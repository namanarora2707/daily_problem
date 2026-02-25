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

        string target = "2026";
        int costA = 4; 
        for(int i = 0; i + 3 < n; i++){
            int diff = 0;
            for(int j = 0; j < 4; j++){
                if(s[i+j] != target[j]) diff++;
            }
            costA = min(costA, diff);
        }

        vector<pair<int,int>> intervals;
        for(int i = 0; i + 3 < n; i++){
            if(s.substr(i,4) == "2025"){
                intervals.push_back({i, i+3});
            }
        }

        int costB = 0;
        if(!intervals.empty()){
            sort(intervals.begin(), intervals.end(),
                 [](auto &a, auto &b){ return a.second < b.second; });

            int last = -1;
            for(auto &seg : intervals){
                if(last < seg.first){
                    costB++;
                    last = seg.second; // modify here
                }
            }
        }

        cout << min(costA, costB) << "\n";
    }
}
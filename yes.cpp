#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int countY=0;
        for(char c:s)
        if(c=='Y') countY++;

        if(countY<=1)cout<<"Yes\n";
        else cout<<"NO\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    string t;
    cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"True";
    }
        else{
            cout<<"False";
        }

    
    return 0;

}
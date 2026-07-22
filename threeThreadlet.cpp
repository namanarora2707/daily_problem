#include<iostream>
using namespace std;

int main (){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;
 
while (t--){
    long long a, b, c;
    cin>>a>>b>>c;

    long long sum = a + b+ c;
    bool ok = false;
    for (int pieces =3;pieces <=6; pieces++){
        if(sum % pieces )continue;
        long long x = sum / pieces;

        if(a%x == 0 && b%x == 0 && c%x == 0){
            ok = true;
            break;
        }
    }
    cout<<(ok ? "YES" : "NO")<<'\n';
}
return 0;

}
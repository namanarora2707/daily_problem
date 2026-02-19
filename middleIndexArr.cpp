#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int mid = n / 2;

    if(n % 2 == 0){
        cout << "Middle indices: " << mid-1 << " " << mid << endl;
        cout << "Middle elements: " << v[mid-1] << " " << v[mid];
    }
    else{
        cout << "Middle index: " << mid << endl;
        cout << "Middle element: " << v[mid];
    }

    return 0;
}

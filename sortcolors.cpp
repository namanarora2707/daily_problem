#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    string line;

    getline(cin,line);        // read full line

    stringstream ss(line);
    int x;
    while(ss>>x){
        arr.push_back(x);
    }

    int c0=0,c1=0,c2=0;

    for(int n:arr){
        if(n==0) c0++;
        else if(n==1) c1++;
        else if(n==2) c2++;
    }

    int i=0;
    while(c0--) arr[i++]=0;
    while(c1--) arr[i++]=1;
    while(c2--) arr[i++]=2;

    for(int n:arr)
        cout<<n<<" ";
}
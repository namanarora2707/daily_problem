#include<iostream>
#include<string>
using namespace std;

int main (){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int anton_win=0;
    int danik_win=0;
    for(char c:s){
        if (c=='A')anton_win++;
     else if (c=='D')danik_win++;
    
    }
    if(anton_win>danik_win)
        cout<<"Anton"<<endl;
    
    else if (danik_win>anton_win)
    
       cout<<"Danik"<<endl;
    
    else
     
        cout<<"Friendship"<<endl;
    

    return 0;
}
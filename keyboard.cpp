#include<iostream>
using namespace std;
int main (){
    char dir;
    cin>>dir;

    string s;
    cin>>s;
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    string result = " ";
    for (char c:s){
        int pos = keyboard.find(c);
        if(dir=='R'){
            result += keyboard[pos-1];

        }
        else 
    {
        result += keyboard[pos+1];
    }
        
    }
    cout<<result ;
    return 0;
}
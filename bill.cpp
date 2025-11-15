#include<iostream>
using namespace std;
int main(){
    double bill;
    cin>>bill;
    int integerPart= (int)bill;
    double decimalPart = bill - integerPart;
    if(decimalPart>=0.5){
        integerPart++;
    }
    cout<<"Final Amount : "<<integerPart<<endl;
    return 0;
}
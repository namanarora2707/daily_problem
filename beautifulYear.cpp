#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(true){
        n++;
        int num = n;

        int freq[10] = {0};
        bool isDistinct = true;

        while(num > 0){
            int digit = num % 10;

            if(freq[digit] == 1){
                isDistinct = false;
                break;
            }

            freq[digit] = 1;
            num /= 10;
        }

        if(isDistinct){
            cout << n;
            break;
        }
    }
}
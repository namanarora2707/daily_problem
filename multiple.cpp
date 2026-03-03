#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> answers;  

    while(t--) {
        int a, b;
        cin >> a >> b;

        int g = __gcd(a, b);
        a /= g;
        b /= g;

        if(a == 1 && b == 1)
            answers.push_back(0);
        else if(a == 1 || b == 1)
            answers.push_back(1);
        else
            answers.push_back(2);
    }
    for(int i = 0; i < answers.size(); i++) {
        cout << answers[i] << endl;
    }

    return 0;
}
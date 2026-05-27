#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> answers;


    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        int ans;

        if (n == 1)
            ans = 0;
        else
            ans = (n - 2) / (k - 1) + 1;

        answers.push_back(ans);
    }

    
    for (int x : answers) {
        cout << x << endl;
    }

    return 0;
}
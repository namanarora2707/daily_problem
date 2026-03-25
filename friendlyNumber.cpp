#include <bits/stdc++.h>
using namespace std;

// function to calculate digit sum
int digit_sum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        int count = 0;

        // try all possible digit sums
        for (int s = 1; s <= 100; s++) {
            long long y = x + s;
            if (digit_sum(y) == s) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int countX = 0;

    // Count standing hamsters
    for (char c : s) {
        if (c == 'X')
            countX++;
    }

    int need = n / 2;
    int changes = abs(countX - need);

    if (countX > need) {
        // Too many standing -> make some sit
        for (int i = 0; i < n && countX > need; i++) {
            if (s[i] == 'X') {
                s[i] = 'x';
                countX--;
            }
        }
    } else if (countX < need) {
        // Too many sitting -> make some stand
        for (int i = 0; i < n && countX < need; i++) {
            if (s[i] == 'x') {
                s[i] = 'X';
                countX++;
            }
        }
    }

    cout << changes << endl;
    cout << s << endl;

    return 0;
}
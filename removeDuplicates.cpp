#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cout << " ";
    cin >> n;

    vector<int> nums(n);
    cout << n ;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (nums.empty()) {
        cout << "Array is empty!" << endl;
        return 0;
    }

    set<int> unique;           // To store unique elements (automatically sorted)
    for (int i = 0; i < n; i++) {
        unique.insert(nums[i]);
    }

    cout << unique.size() << endl;
    cout << "";
    for (int num : unique) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {9, 46, 24, 52, 20, 13};
    int n = arr.size();
    cout << "Given Array: ";
    for (auto i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
        bool sorted = true;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                sorted = false;
            }
        }
        if (sorted) {
            break;
        }
        cout << "Iteration " << i + 1 << " : ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    cout << "Sorted Array: ";
    for (auto i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

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
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        cout << "Iteration " << i << " : ";
        for (auto k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    cout << "Sorted Array: ";
    for (auto i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

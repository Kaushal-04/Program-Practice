#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {9,46,24,52,20,13};
    int n = arr.size();
    cout << "Given Array : ";
    for(auto i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(auto i=0; i<n-1; i++){
        auto mini = min_element(arr.begin()+i, arr.end());
        swap(arr[i], *mini);
        cout << "Iteration " << i+1 << " : ";
        for(auto i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << "Sorted Array : ";
    for(auto i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
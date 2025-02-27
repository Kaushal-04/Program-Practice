#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }
}

void Merge_sort(vector<int>& arr, int low, int high){
    if(low >= high)
        return ;
    int mid = (low + high) / 2;
    Merge_sort(arr, low, mid);
    Merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}


int main(){
    vector<int> arr = {3,1,2,4,1,5,2,6,4};
    int n = arr.size();
    cout << "Given Array : " << endl;
    for(auto i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    Merge_sort(arr, 0, n-1);
    cout << "Sorted Array : " << endl;
    for(auto i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void reverse_arr(vector<int> &arr, int l, int r){
    if(l == r)
        return ;
    swap(arr[l], arr[r]);
    reverse_arr(arr,l+1,r-1);
}
int main(){
    vector<int> arr;
    cout << "5 array elements : " ;
    for(int i=0; i<5; i++){
        arr.push_back(i);
        cout << i << " ";
    }
    cout << endl;
    reverse_arr(arr,0,4);
    cout << "Reverse array elements : " ;
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

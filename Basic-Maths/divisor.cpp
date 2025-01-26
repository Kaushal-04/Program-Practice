#include<bits/stdc++.h>
using namespace std;
void method_1(int num){
    for(auto i=1; i<=num/2; i++){
        if(num % i == 0)
            cout << i << " ";
    }
    cout << num << endl;;
}
void method_2(int num){
    set<int> st;
    for(int i=1; i<=sqrt(num); i++){
        if(num % i == 0){
            cout << i << " ";
            st.insert(i);
            if(i != int(num/i)){
                cout << int(num/i) << " ";
                st.insert(int(num/i));
            }
        }
    }
    cout << endl;
    for(auto it : st){
        cout << it << " ";
    }
}
int main(){
    int num;
    cin >> num;
    method_1(num);
    method_2(num);
    return 0;
}
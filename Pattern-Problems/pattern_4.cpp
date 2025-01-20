/*
1
22
333
4444
55555
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<=i; j++){
            cout << i+1;
        }
        cout << "\n";
    }
    return 0;
}
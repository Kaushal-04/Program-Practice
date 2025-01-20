/*
1      1
12    21
123  321
12344321
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<4; i++){
        for(auto j=0; j<i+1; j++){
            cout << j+1;
        }
        for(auto j=0; j<(4*2)-(2*(i+1)); j++){
            cout << " ";
        }
        int temp = i+1;
        for(auto j=0; j<i+1; j++){
            cout << temp--;
        }
        cout << "\n";
    }
    return 0;
}
/*
A
BB
CCC
DDDD
EEEEE
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<=i; j++){
            cout << char('A'+i);
        }
        cout << "\n";
    }
    return 0;
}
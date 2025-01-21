/*
A
AB
ABC
ABCD
ABCDE
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<=i; j++){
            cout << char('A'+j);
        }
        cout << "\n";
    }
    return 0;
}
/*
ABCDE
ABCD
ABC
AB
A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<5-i; j++){
            cout << char('A'+j);
        }
        cout << "\n";
    }
    return 0;
}
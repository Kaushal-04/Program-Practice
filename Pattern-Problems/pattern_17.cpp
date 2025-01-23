/*
   A
  ABA
 ABCBA
ABCDCBA
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<4; i++){
        for(auto j=0; j<4-i-1; j++){
            cout << " ";
        }
        for(auto j=0; j<i+1; j++){
            cout << char('A'+j);
        }
        for(auto j=0; j<i; j++){
            cout << char('A'+i-j-1);
        }
        cout << "\n";
    }
    return 0;
}
/*
**********
****  ****
***    ***
**      **
*        *
**      **
***    ***
****  ****
**********
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<5-i; j++){
            cout << "*";
        }
        for(auto j=0; j<2*i; j++){
            cout << " ";
        }
        for(auto j=0; j<5-i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(auto i=1; i<5; i++){
        for(auto j=0; j<i+1; j++){
            cout << "*";
        }
        for(auto j=0; j<(2*5)-(2*i)-2; j++){
            cout << " ";
        }
        for(auto j=0; j<i+1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
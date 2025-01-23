/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<i+1; j++){
            cout<<"*";
        }
        for(auto j=0; j<(2*5)-(2*i)-2; j++){
            cout << " ";
        }
        for(auto j=0; j<i+1; j++){
            cout <<"*";
        }
        cout<<"\n";
    }
    for(auto i=0; i<5-1; i++){
        for(auto j=5-i-1; j>0; j--){
            cout<<"*";
        }
        for(auto j=0; j<2*(i+1); j++){
            cout << " ";
        }
        for(auto j=0; j<5-i-1; j++){
            cout << "*";
        }
        cout<<"\n";
    }
    return 0;
}
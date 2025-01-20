/*
*********
 *******
  *****
   ***
    *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<i; j++){
            cout << " ";
        }
        for(auto j=0; j<(5*2)-((2*i)+1); j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
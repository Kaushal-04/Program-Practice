/*
    *
   ***
  *****
 *******
*********
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<5-i-1; j++){
            cout << " ";
        }
        for(auto k=0; k<2*(i+1)-1; k++){
                cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
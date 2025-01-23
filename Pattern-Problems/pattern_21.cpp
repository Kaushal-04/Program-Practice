/*
* * * * *
*       *
*       *
*       *
* * * * *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        cout << "* ";
    }
    cout << "\n";
    for(auto i=0; i<5-2; i++){
        for(auto j=0; j<5; j++){
            if(j == 0 || j== 5-1)   cout << "* ";
            else    cout << "  ";
        }
        cout << "\n";
    }
    for(auto i=0; i<5; i++){
        cout << "* ";
    }
    return 0;
}
/*
1
01
101
0101
10101
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    bool check;    
    for(auto i=0; i<5; i++){
        if(i % 2 == 0)  check = true;
        else    check = false;
        
        for(auto j=0; j<=i; j++){
            if(check){
                cout << "1";
                check = false; // Toggle the value of 'check'
            }
            else{
                cout << "0";
                check = true; // Toggle the value of 'check'
            }
        }
        cout << "\n";
    }
    return 0;
}

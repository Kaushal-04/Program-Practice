/*
E
D E
C D E
B C D E
A B C D E
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<=i; j++){
            cout << char('A'+5-1-i+j) << " ";
        }
        cout << "\n";
    }
    return 0;
}
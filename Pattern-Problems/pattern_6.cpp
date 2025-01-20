/*
12345
1234
123
12
1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<5-i; j++){
            cout << j+1;
        }
        cout << "\n";
    }
    return 0;
}
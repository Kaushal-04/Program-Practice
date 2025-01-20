/*
1
12
123
1234
12345
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<5; i++){
        for(auto j=0; j<=i; j++){
            cout << j+1;
        }
        cout << "\n";
    }
    return 0;
}
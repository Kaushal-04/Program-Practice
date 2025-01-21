/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count = 1;
    for(auto i=0; i<5; i++){
        for(auto j=0; j<i+1; j++){
            cout << count++ << " ";
        }
        cout << "\n";
    }
    return 0;
}
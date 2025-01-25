/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(auto i=0; i<(2*4)-1; i++){
        for(auto j=0; j<(2*4)-1; j++){
            int top = i;
            int left = j;
            int right = (2*4)-2-j;
            int bottom = (2*4)-2-i;
            cout << (4-min(min(left,right), min(top,bottom)));
        }
        cout << "\n";
    }
    return 0;
}
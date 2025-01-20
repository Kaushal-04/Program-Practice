/*

*
**
***
****
*****
****
***
**
*

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<5-1;i++){
        for(int j=5-i-1;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    
    return 0;
}
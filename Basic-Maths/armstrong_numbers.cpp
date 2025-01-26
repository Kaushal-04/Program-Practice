#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int temp = num;
    int sum = 0;
    while(temp){
        sum = sum + ((temp % 10) * (temp % 10) * (temp % 10));
        temp /= 10;
    }
    if(sum == num) 
        cout << "Armstrong Number";
    else    
        cout << "Not Armstrong Number";
    return 0;
}

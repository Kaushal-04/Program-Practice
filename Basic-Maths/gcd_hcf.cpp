#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    if(num1 == num2){
        cout << num1 << endl;
        return 0;
    }
    while(num1 != 0 || num2 != 0){
        if(num1 == 0){
            cout << num2;
            return 0;
        }
        if(num2 == 0){
            cout << num1;
            return 0;
        }
        if(num1 > num2){
            num1 %= num2;
        }
        num2 %= num1;

    }
    return 0;
}

// LCM = (num1 * num2)/GCD(num1, num2)
#include<bits/stdc++.h>
using namespace std;

void fibonacci(int a, int b, int term){ // Print n terms of fibonacci series
    if(term < 1)
        return;
    cout << a+b << " ";
    fibonacci(b, a+b, term-1);
}

int main(){
    int term;
    cin >> term;
    if(term == 1){
        cout << "0 ";
        return 0;
    }
    int  a = 0, b = 1;
    cout << a << " " << b << " ";
    fibonacci(a, b, term-2);
    return 0;
}
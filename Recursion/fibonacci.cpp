#include<bits/stdc++.h>
using namespace std;

int fibo(int n){ // Print nth term
    if(n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}


void fibonacci(int a, int b, int term){ // Print n terms of fibonacci series
    if(term < 1)
        return;
    cout << a+b << " ";
    fibonacci(b, a+b, term-1);
}

int main(){
    int term = 20;
    if(term == 1){
        cout << "0 ";
        return 0;
    }
    int  a = 0, b = 1;
    cout << a << " " << b << " ";
    fibonacci(a, b, term-2);
    cout << endl;
    cout << "7th term is " << fibo(7) << endl;
    return 0;
}
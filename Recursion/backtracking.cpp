// Parameter Method

#include<bits/stdc++.h>
using namespace std;

void fun(int i, int n){    // Print from 1 to n using backtrack
    if(n < 1)
        return;
    fun(i, n-i);
    cout << n << " ";
}

void fun_(int i, int n){    // Print from n to 1 using backtrack
    if(i > n)
        return;
    fun_(i+1, n);
    cout << i << " ";
}

int main(){
    int n;
    cin >> n;
    fun(1, n);
    cout << endl;
    fun_(1, n);
    return 0;
}
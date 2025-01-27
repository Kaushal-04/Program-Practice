#include<bits/stdc++.h>
using namespace std;
int sum(int num){   // Sum of numbers from 1 to n
    if(num == 0)
        return 0;
    return num + sum(num-1);
}
int main(){
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}
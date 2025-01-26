#include<bits/stdc++.h>
using namespace std;
void printDigit(int num){
    stack<int> st;
    while(num){
        st.push(num % 10);
        num = num/10;
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}
int main(){
    int num;
    cin >> num;
    cout << "Number : " << num << endl;
    cout << "Number of digits : "<< int(log10(num) + 1) << endl;
    cout << "Digits are : " ;
    printDigit(num); 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void prime(int num){
    int count = 0;
    for(int i=1; i<=sqrt(num); i++){
        if(num % i == 0){
            count++;
            if(i != int(num/i)){
                count++;
            }
        }
    }
    if(count > 2)   cout << "Not Prime";
    else    cout << "Prime";
}
int main(){
    int num;
    cin >> num;
    if(num == 1){
        cout << "Not Prime";
        return 0;
    }
    prime(num);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool palindrome_check(string str, int i){
    if(i > (str.length()-1)/2)
        return true;
    if(str[i] == str[str.length()-1])
        palindrome_check(str, i+1);
    else
        return false;
}
int main(){
    string str = "MADAM";
    bool check = palindrome_check(str, 0);
    if(check)
        cout << " True";
    else 
        cout << "False";
    return 0;
}
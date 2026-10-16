#include<iostream>
using namespace std;
int main() {
    int n, reverce =0, lastDigit, original;
    cin>>n;
    original = n;
    while(n>0) {
        lastDigit = n%10;
        reverce = reverce*10 + lastDigit;
        n = n / 10;
    }
    if(original==reverce) {
        cout<<"Given number is palindrime"<<endl;
    }
    else {
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}

//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int t;
    float a, b, c;
    cin>>t;
    for(int i=0; i<t; i++) {
        cin>>a;
        cin>>b;
        cin>>c;
        if((a+b)/2 > c) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

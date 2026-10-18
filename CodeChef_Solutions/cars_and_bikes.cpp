// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/TYRES
#include<iostream>
using namespace std;
int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n%4!=0) {
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
    return 0;
}

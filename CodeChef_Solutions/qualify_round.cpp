// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/QUALIFY
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,x,a,b;
    cin>>t;
    while(t--) {
        cin>>x>>a>>b;
        if(x <= a + 2*b) {
            cout<<"Qualify"<<endl;
        }
        else {
            cout<<"NotQualify"<<endl;
        }
    }
    return 0;
}

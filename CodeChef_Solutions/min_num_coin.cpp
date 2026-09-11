// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCOINS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,x;
    cin>>t;
    while(t--) {
        cin>>x;
        if(x%5!=0) {
            cout<<"-1\n";
        }
        else if(x%10==0) {
            cout<<x/10<<endl;
        }
        else {
            cout<<x/10+1<<endl;
        }
    }
    return 0;
}

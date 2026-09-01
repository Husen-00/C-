//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,a,b;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        int c = 21-(a+b);
        if(c>=1 && c<=10) {
            cout<<c<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
    return 0;
}

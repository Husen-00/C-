// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a1, a2, a3, b1, b2, b3;
    cin>>t;
    while(t--) {
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        int alice_score = (a1+a2+a3) - min({a1, a2, a3});
        int bob_score = (b1+b2+b3) - min({b1, b2, b3});
        if(alice_score > bob_score) {
            cout<<"Alice"<<endl;
        }
        else if(bob_score > alice_score) {
            cout<<"Bob"<<endl;
        }
        else {
            cout<<"Tie"<<endl;
        }
    }
    return 0;
}

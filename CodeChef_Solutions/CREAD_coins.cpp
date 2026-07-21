// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x, y;
    cin>> t;
    while(t--) {
        cin>>x;
        cin>>y;
        cout<< (x*y)/100 << endl;
    }
    return 0;
}

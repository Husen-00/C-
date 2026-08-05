//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x;
    cin>>t;
    while(t--) {
        cin>>x;
        if(x<=50) {
            cout<<"LEFT\n";
        }
        else {
            cout<<"RIGHT\n";
        }
    }
    return 0;
}

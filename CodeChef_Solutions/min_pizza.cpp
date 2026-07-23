//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,x;
    cin>>t;
    while(t--) {
        cin>>n;
        cin>>x;
        int totalSlices = n*x;
        int pizza = (totalSlices + 3) / 4;
        cout<<pizza<<endl;
    }
    return 0;
}

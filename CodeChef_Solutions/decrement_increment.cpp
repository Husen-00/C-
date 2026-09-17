//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DECINC
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%4==0) {
        cout<<n+1<<endl;
    }
    else {
        cout<<n-1<<endl;
    }
    return 0;
}

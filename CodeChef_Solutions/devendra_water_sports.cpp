// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/DEVSPORTS
#include <iostream>
using namespace std;
int main() {
    int t, z, y, a, b, c;
    cin>>t;
    while(t--) {
        cin>>z>>y>>a>>b>>c;
        int h = z-y;
        if(h >= a+b+c) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

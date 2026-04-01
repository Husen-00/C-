// Swapping of two numbers by using pointers and also without using an external variable...

#include <iostream> 
using namespace std;
void swap(int *p, int *q) {
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q; 
}

int main() {
    int p, q;
    cout<<"Enter the value of p: ";
    cin>>p;
    cout<<"Enter the value of q: ";
    cin>>q;
    cout<< "Before swapping p = " << p << " q = " << q <<endl;
    swap(&p , &q );
    cout<<"After swapping p = " << p << " q = " << q <<endl;
    return 0;
}

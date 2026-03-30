#include<iostream>
using namespace std;
int main() {
  int a, b;
cout<< "Enter a : ";
cin>> a;
cout<< "Enter b : ";
cin>> b;
cout<< "Before Swapping a = " << a << "   B = " << b << endl;
a = a + b;
b = a - b;
a = a - b;
cout<< "After swapping a = " << a << "    B = " << b << endl;
}

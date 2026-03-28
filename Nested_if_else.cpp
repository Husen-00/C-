#include<iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter the student marks: " << endl;
    cin>> marks;
    if(marks < 0 && marks > 100) {
        cout<< "Marks not defined: " << endl;
    }
    else if(marks <= 100 && marks >=90) {
        cout<< "A Grade" << endl;
    }
    else if(marks < 90 && marks >= 80) {
        cout<< "B Grade" << endl;
    }
    else if(marks < 80 && marks >= 70) {
        cout<< "C Grade" << endl;
    }
    else {
        cout<< "fail" << endl;
    }
    return 0;
}
#include<stdio.h>
int factorial(int x) {
    int fact=1;
    for(int i=2; i<=x; i++) {
        fact = fact*i;
    }
    return fact;
}
int main() {
    int n,r;
    printf("Enter the number n: ");
    scanf("%d",&n);
    printf("Entrer r: ");
    scanf("%d",&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    int npr= factorial(n)/(factorial(n-r));
    printf("The combination is %d\n",ncr);
    printf("The permutation is %d\n",npr);
    return 0;
}
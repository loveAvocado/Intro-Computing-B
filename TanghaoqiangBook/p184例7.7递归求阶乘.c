#include <stdio.h>
int factorial(unsigned int);

int main (){
    int n;
    scanf("%d",&n);
    printf("%d\n", factorial(n));
    return 0;
}

int factorial(unsigned int n){
    if (n <= 1) return 1;
    else n = n * factorial(n-1);
    return n;
}
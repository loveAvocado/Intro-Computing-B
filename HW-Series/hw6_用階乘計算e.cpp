#include <iostream>
#include <cmath>
using namespace std;
float factorial(float);
float e(float);
float one = 1;

// 利用公式e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! 求e 。
int main () {
    float n;
    cin >>n;
    printf("%.4f\n",e(n));
    return 0;
}

float factorial(float n){ 
	if (n <= 1) return 1;
	else n *= factorial(n-1);
	return n;
}

float e(float n){
    int i;
    float E = 0;
    
    for (i=0;i<=n;i++){  
        E += (one/factorial(i));
    }
    return E;
}
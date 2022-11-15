//打印所有水仙花数。
#include <iostream>
#include <cmath>
using namespace std;
void Narcissistic(int);
int Cube(int);

int main (){
    int i;
    for (i=100;i<1000;i++){
        Narcissistic(i);
    }
    return 0;
}

void Narcissistic(int n){
    if (n == Cube(n)) cout<< n<<endl;
}

int Cube(int n){
    int a,b,c;
    a = n/100;
    n -= a*100;
    b = n/10;
    n -= b*10;
    c = n;
    return (pow(a,3)+pow(b,3)+pow(c,3));
}
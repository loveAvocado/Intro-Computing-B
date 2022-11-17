#include <cstdio>
using namespace std;
int PrimeFactor(int,int);

//input 14,21
//output 42

int main () {
    int a,b;
    scanf("%d,%d", &a, &b);
    printf("%d\n",PrimeFactor(a,b));
    return 0;
}

int PrimeFactor(int a,int b){
    int sum = 1;
    int max = a>b?a:b;
    int min = a<b?a:b;
    if (a==1) return b;
    else if (b==1) return a;  // 當一個數是1時，二者的最小公倍數必然是另一個數。

    for (int i = 2; i <= min ; i++){  //不能從1開始
        if (max % i ==0 && min % i == 0){
            sum *= i;
            max /= i;
            min /= i;
        }
    }
    sum*= (max * min); // 求出所有公因數後將剩餘的數相乘
    return sum;
}
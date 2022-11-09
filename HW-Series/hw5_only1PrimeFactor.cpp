#include <iostream>
using namespace std;
/*
要求，输入一个非质数，输出其所有质因数。格式为
输入： 20；
输出： 20=2*2*5
*/
int main () {
    int n; 
    cin >> n;
    int n1 = n; //用于while循环。

    int i=2;
    cout << n<<'=';
    int prod = 1;
    while (i<n1){
        if (n % i == 0){
            prod *= i;
            if (prod == n1) cout << i; // 用于判断所得的质因数是不是最后一个，如果是，则不在其之后输出乘号。
            else cout << i << '*';
            n /= i; 
        }
        else {
            i++;
        }
    }
    return 0;
}
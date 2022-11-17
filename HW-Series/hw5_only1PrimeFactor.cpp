#include <iostream>
using namespace std;
void Prime(int);
/*
要求，输入1个大于1的整数，输出其所有质因数。格式为
输入： 20；
输出： 20=2*2*5
*/
int main () {
    int n; 
    cin >> n;
    if (n<2) {
        cout << "请输入一个大于1的整数。"<< endl;
        return 0;
    }
    Prime(n);
    return 0;
}

void Prime(int n){
    int n1 = n; //用于while循环。
    int i=2; //最小质数为2，因此分解质因数时从2开始。
    cout << n<<'=';
    int prod = 1; 
    while (i<=n1){
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
    cout << endl;
}
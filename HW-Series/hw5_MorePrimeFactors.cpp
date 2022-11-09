/*
给定一个正整数数组，输出其所有质因数。
输入
2
90
20
输出
90=2*2*3*5
20=2*2*5
*/
#include <iostream>
#include <cstdio>
using namespace std;

void Prime(int n) {
    int n1 = n; //用于while循环。
    int i=2;
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
}

int main (){
    int num; 
    cin >> num;
    int nList[num];
    int a;
    for (a=0;a<num;a++){
        scanf("%d", &nList[a]);
    }
    for (a=0;a<num;a++){
        Prime(nList[a]);
        cout << endl;
    }
    return 0;
}
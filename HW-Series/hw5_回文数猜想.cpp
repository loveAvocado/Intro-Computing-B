/*
回数猜想：
给定一个数，将其倒过来，然后将两个数相加。得到一个数。
再将这个数倒过来，将两个数相加，得到一个数。……
如此反复多次之后，一定能得到一个回文数。
本题判断反复7次后，能否得到一个回文数，如能输出每步计算过程（换行）然后输出能否得到回数（Y/N）。
输入： 68 （数据类型为int）
输出：
68+86=154
154+541=605
605+506=1111
Y
要求：
主函数中接收键盘数据，显示该数与其倒数的和，输出每一步计算步骤。
子函数1，计算该数的倒数。
子函数2，验证和是否为回数，
*/
#include <iostream>
#include <cmath>
using namespace std;

// 反转数字使用 /10
int reversal(int n){ 
    int ws, x = 1, rev = 0;
    int i,j;
    ws = log10(n)+1; //计算n的位数w
    for (j=1;j<ws;j++) x *= 10; //循环计算，相应位数的10的倍数（几个10相乘）
    for (i=1;i<=ws;i++) { //实现逆序数字
        rev += n%10 * x; //每次选择最低位的数字做新数字的最高位
        x /= 10; //
        n /= 10; //
    }
    return rev; // 
}

int ifPalindromic(int number){
    int tf = 0; //0为假
    int revnumber;
    revnumber = reversal(number); // 如果与逆输出不同，则表明不是回文数。
    if (revnumber == number) tf = 1;
    else tf = 0;
    return tf;

}

int main () {
    int input;
    cin >> input;
    int loop = 0;
    while (loop <= 7 && ifPalindromic(input) != 1){ //循环次数少于7 且 不是回文数。大于7次则不满足退出循环。
        cout <<input<<'+'<<reversal(input)<<'='<<input+reversal(input)<<endl;
        input += reversal(input);
        loop ++;
    }
    if (ifPalindromic(input) == 0) cout << "N" << endl;
    else cout << "Y" << endl;
    return 0;
}
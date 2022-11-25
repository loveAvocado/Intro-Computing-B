// 輸入一個數N，代表有N組字符串；隨後輸入N組字符串；
// 輸出N行，每行分別是最長連續出現的字符及其次數，如果有多個，則輸出第一個‘
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
#define MAX 1000

int main() {
    int n;
    cin >> n;
    char a[n][MAX];
    for (int i=0;i<n;i++) {
        scanf("%s",a[i]);
    }
    for (int i=0;i<n;i++){
        int len=strlen(a[i]);
        int num = 1;
        int max = 0;
        char maxchar;
        for (int j = 0; j < len; ++j) {
            if(a[i][j]==a[i][j+1]){
                num++;
            }
            else {
                if(num > max){
                    max = num;
                    maxchar =a[i][j];
                }
                num=1;
            }
        }
        cout << maxchar <<" "<< max << endl;
    }
    return 0;
}
// 輸入一個數組（數組個數，數組內容），然後輸出唯一一個只出現奇數次的數
// 借助異或運算 
#include <stdio.h>

int main () {
    int n;
    int num=0;
    scanf("%d", &n);
    int nlist[n];
    for (int i=0;i<n;i++)
        scanf("%d", &nlist[i]);

    for (int p=0;p<n;p++){
        num ^= nlist[p];
    }
    printf("%d\n",num);
    return 0;
}
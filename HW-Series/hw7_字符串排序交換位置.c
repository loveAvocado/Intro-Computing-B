// 輸入一個字符串，將其前半部分按照ascii降序排序，然後交換左右兩部分。
// 如果數組元素個數為奇數，則中位數不變。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
char temp;
int j,i;
int main (){
    char str[MAX]; //初始化
    gets(str);
    int len = strlen(str);
    char new[len];
    for (int i=0;i<len;i++){
        new[i] = str[i];
    }
    if (len %2 == 0){
        for (i=0; i<len/2-1;i++){
            for (j=i+1;j<len/2;j++){
                if (str[i] <= str[j]){
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
        for (i=0;i<len/2;i++){
            new[len/2+i] = str[i];
        }
        for (i=len/2; i<len; i++){
            new[i-len/2] = str[i];
        }
    }

    else {
        for (i=0; i<len/2-1; i++){
            for (j=i+1;j<len/2;j++){
                if (str[i] <= str[j] ){
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
        for (i=0;i<=len/2-1;i++){
            new[len/2+1+i] = str[i];
        }
        for (i=len/2+1; i<len; i++){
            new[i-1-len/2] = str[i];
        }
        
    }
    new[len] = '\0'; 
    /* 
        不知道為什麼輸出的字符串末尾有不明所以的特殊字符，
        例如 efghdcbanI�
        因此手動添加了終止符
    */
    printf("%s\n", new);
    return 0;
}
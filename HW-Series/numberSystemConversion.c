#include <stdio.h>
#include <string.h>
#include <math.h>
/*
第一个数字b表示输入的进制表示的基（如 7 表示七进制，21表示21进制）
第二个数字n表示输入的数字有n位
接下来n个字符依次为输入数字由高到低的每一位。对于>10进制表示，利用大写字母A,B,C,...依次表示该位大于9的数字。
*/

int main () {
    int base, length;
    scanf("%d %d", &base, &length);
    char number[length+1];
    scanf("%s",number);

    int numlist[length];
    int n;
    for (n=0;n<length;n++){
        if (number[n] >='0' && number[n]<='9'){
            numlist[n] = number[n]-'0';
        }
        else if (number[n] >='a' && number[n]<='z'){
            numlist[n] = number[n]-'W';
        }
        else if (number[n] >='A' && number[n]<='Z'){
            numlist[n] = number[n]-'7';
        }
       
        //printf("%d",numlist[n]);
    }
    
    int base10 = 0;
    int i;
    int j = 0; 
    for (i=0;i<length;i++){
        
        base10 +=  numlist[i] * pow(base,length-1-i); 
    }
    printf("%d",base10);
    // int test;
    // test = 'e' - 'W';
    // printf("\n%d",test);
    return 0;
}
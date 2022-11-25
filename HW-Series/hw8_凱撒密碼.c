#include <stdio.h>
/*如将数字0变成数字5，数字1变成数字6，即
每个数字变成其值加5之后对10取余得到的数字
，5变成1，6变成2;
第一行輸入一行原文，第二行輸入一行密文。每行由10個數字組成
輸出分別為密文、原文。*/
/* C语言初始模板程序 */

int main(void) { 
    int encode[10];
    int decode[10];
    int i;
    
    for (i=0;i<10;i++){
        scanf("%d", &encode[i]);
    }
    for (i=0;i<10;i++){
        scanf("%d", &decode[i]);
    }
    
    for (i=0;i<9;i++){
        printf("%d ", (encode[i]+5)%10 );
    }
    printf("%d\n", (encode[9]+5)%10 );
    
    
    for (i=0;i<9;i++){
        if ( decode[i] >= 0 && decode[i] < 5){
            printf("%d ", decode[i]+5);
        }
        else {
            printf("%d ", decode[i]-5);
        }
    }
    
    if ( decode[i] >= 0 && decode[i] < 5){
            printf("%d\n", decode[9]+5);
        }
        else {
            printf("%d\n", decode[9]-5);
        }
	return 0;
}
#include<stdio.h>
#include<string.h>
#define MAX 400
#define TRUE 1
#define FALSE 0

int main () {
    // input 
    int pair; 
    scanf("%d",&pair);
    int ans[pair][2][MAX+10]; // 2 input and 1st turned into the answer; 
    char matrix[pair][2][MAX+10]; // define max size of each string;

    int i,j,k;
    for (i=0; i<pair;i++){
        for (j=0; j<2;j++){
            scanf("%s", matrix[pair][j]);
            memset(ans[i][j],0,sizeof(ans[i][j]));
        }
    }

    for (i=0;i<pair;i++){ //    每一組加數
        for (j=0;j<2;j++){  // 裏面是2個加數字符串 或 組成加數各個數位的列表），indice 分別是 0，1 ；
            int sLen = strlen(matrix[i][j]); // 加數的長度
            int t = 0; 
            for (k=sLen-1; k>=0;k--){  //逆序將字符串轉爲整數列表，裏面是兩個字符數組。操作每個加數的各個位。
                ans[i][j][t++] = matrix[i][j][k] - '0';  //逆序將字符串轉爲整數列表
                if (j==1){  // 遍歷到第二個加數時，將前一個數加到第二個數上。
                    for (k=0;k<MAX; k++){ //操作每個加數的各個位
                        ans[i][j][k] += ans[i][j-1][k];
                        if (ans[i][j][k] >= 10){ //如果和大於0，就進一位，然後減去10
                            ans[i][j][k] -= 10;
                            ans[i][j][k+1]++;
                        } // 至此，得到個位在左側的整數數組，若設定MAX位10，則7823會被表示爲32870000000
                    }               
                }                
            }
            int start = FALSE;
            for (k=MAX;k>=0;k--){
                if (start==TRUE){
                    printf("%d",ans[i][1][k]);
                }
                else if (ans[i][1][k]){
                    printf("%d",ans[i][1][k]);
                    start = TRUE;
                }
            }    
        }
    }  
    return 0;
}


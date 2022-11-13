#include <stdio.h>
#include <string.h>
#define M 400

int WordsCount(char str[M]){
    int sum=0, sein = 0,i; 
    for (i=0;str[i] != '\0'; i++){    
        if (str[i] == ' ') sein = 0; //表示此處沒有字母
        else if (str[i] != ' '){
            if ( (sein == 0) && ((str[i] > 'a' && str[i] < 'z') 
            || (str[i] > 'A' && str[i] < 'Z') 
            || (str[i] > '0' && str[i] < '9'))) { //本身是字母或数字，而且前面是空格。防止把标点视为单词计数
                sum++;      // 複覈條件，算作一個單詞
                sein = 1;  //因为不是空值了，所以定义为1
            }  
            /*  
            else if (sein != 0){ //前面有字母
                sein = 1; //不記錄單詞書
            }
            */ 
        }     
    }
    return sum;
}

int main() {
    char str[M];
    printf("輸入一個句子，要求不超過400字節。");
    gets(str);
    printf("There're totally %d word(s) in %s.\n",WordsCount(str),str);
    return 0;
}
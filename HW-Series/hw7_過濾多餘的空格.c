// 輸入一個句子，過濾多餘的空格。只留下一個。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1000

int main () {
    char str[MAX];
    gets(str);
    int len = strlen(str);
    char new[len];
    int i, j=0;
    for (i=0; i<len ; i++){
        if (str[i] != ' ') {
            new[j] = str[i];
            j++;
        }
        if (str[i] == ' ' && str[i-1] !=' '){
            new[j] = str[i];
            j++;
        }
    }
    new[j++] = '\0'; //不加這個會產生垃圾值。
    printf("%s\n", new);
    return 0;
}
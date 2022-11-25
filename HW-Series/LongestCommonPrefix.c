#include <stdio.h>
#include <string.h>
#define MAX_SL 255 
char* StringCMP(char,char)

char str[4][MAX_SL];

int main () {
    for (int i=0;i<4;i++){
        gets(str[i]);
    }
    char app[MAX_SL];
    printf("%s\n",  StringCMP(StringCMP(StringCMP(str[0],str[1]),str[2]),str[3]));
    return 0;
}

char* StringCMP(char str1[MAX_SL], char str2[MAX_SL]){
    char LCP[MAX_SL];
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int diff;
    for (int i=0;i < (len1 > len2 ? len1:len2 ); i++){
        if (str1[i] != str2[i]) {
            diff = i;
            LCP[diff] = '\0';
        }

    }
    for (int j=0;j<diff;j++){
        LCP[j] = str1[j];
    }
    return *LCP;
}

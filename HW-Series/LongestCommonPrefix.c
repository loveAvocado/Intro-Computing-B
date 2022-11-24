#include <stdio.h>
#include <string.h>
#define MAX_SL 255 

char str[4][MAX_SL];

int main () {
    for (int i=0;i<4;i++){
        gets(str[i]);
    }

    char new[MAX_SL];
    for (int i = 0;str[0][i] != '\0'; i++){
        new[i] = str[0][i];
    }

    int newlen = strlen(new);
    int pop = newlen;
    int same;
    for (int i=0;i<newlen ;i++){
        same = strcmp(str[0],new) + strcmp(str[1],new)  + strcmp(str[2],new) + strcmp(str[3],new) ;
        if (same != 0) {
            new[pop-1] = '\0';
            pop--;
        }
    }
    printf("%s\n", new);
    return 0;
}

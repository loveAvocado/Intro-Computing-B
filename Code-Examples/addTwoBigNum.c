#include <string.h>
#include <stdio.h>
#define MAX_LEN 200

int an1[MAX_LEN+10];
int an2[MAX_LEN+10];
char szLine1[MAX_LEN+10];
char szLine2[MAX_LEN+10];

int main () {
    int i,j;
    scanf("%s %s", szLine1, szLine2);
    memset(an1,0,sizeof(an1));
    memset(an2,0,sizeof(an2));
    int nLen1 = strlen(szLine1);
    j=0;
    for (i=nLen1-1; i>=0;i--){
        an1[j++]=szLine1[i] - '0';
    }
    int nLen2 = strlen(szLine2);
    j=0;
    for (i=nLen2-1;i>=0;i--){
        an2[j++]=szLine2[i] - '0';
    }
    for (i=0;i<MAX_LEN;i++){
        an1[i] += an2[i];
        if (an1[i] >= 10){
            an1[i] = 10;
            an1[i+1] ++;
        }
    }
    //bool bStartOutput = false;
    //int bStart = 1;
    for (i=MAX_LEN; i>0; i--){

            printf("%d",an1[i]);
       
    }
    return 0;
}
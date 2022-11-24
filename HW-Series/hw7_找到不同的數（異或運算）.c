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
#include <stdio.h>
int max4(int,int,int,int);
int max2(int,int);

int main (){
    int a, b, c, d;
    scanf("%d %d %d %d", &a , &b, &c, &d );
    printf("%d\n",max4(a,b,c,d));
    return 0;
}

int max2(int a,int b){
    return (a>b?a:b);
}

int max4(int a,int b,int c,int d){
    int m;
    m = max2(a,b);
    m = max2(m,c);
    m = max2(m,d);
    return m;
}
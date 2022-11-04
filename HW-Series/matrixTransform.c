// 设计一个算法将一个矩阵进行转置并且输出。
// 关于输入
// 第一行是两个正整数m,n，表示矩阵有m行n列。
// 然后是m行，每行n个整数，是需要转置的矩阵。
// 关于输出
// 输出n行，每行m个整数，用空格分隔，行尾不能有空格。
#include <stdio.h>

int main () {
    unsigned int row,col;
    scanf("%d %d",&row, &col);
    
    int matrix1[row][col];
    int matrix2[col][row];
    int i ,j;
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    for (j=0;j<row ;j++){
        for (i=0;i<col ;i++){
            matrix2[j][i] = matrix1[i][j];
        }
    }


    for (i=0;i<row;i++){
        for (j=0;j<col;j++)
            if (j<row-1)
                printf("%d ",matrix1[j][i]);
            else printf("%d\n",matrix1[j][i]);
    }
    return 0;

}
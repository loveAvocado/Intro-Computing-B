#include <stdio.h>
#include <string.h>

//其目标颜值水平、其目前颜值水平、两个颜值水平的差异
//矩阵减法通常是在两个维数相同的矩阵之间进行，其计算方法是对应位置的数值直接做算术减法，例如矩阵A和B，做减法（A-B）后得到矩阵C，C[i][j] = A[i][j] - B[i][j]
int main () {
    int m, n; 
    scanf("%d %d",&m, &n);
    int post_face[m][n];
    int prev_face[m][n];

    int i,j;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&post_face[i][j]);
        }
    }

    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&prev_face[i][j]);  
        }
        
    }

    int diff_face[m][n];
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            diff_face[i][j] = post_face[i][j]-prev_face[i][j]; 
        }
    }

    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("%d", diff_face[i][j]);
            if (j!=(n-1)) printf(" ");
        }
        printf("\n");
    }


    return 0;
}
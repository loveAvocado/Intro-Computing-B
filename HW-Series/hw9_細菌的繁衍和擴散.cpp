#include <cstdio>
#include <cstring>
using namespace std;

int main () {
    int Breed[9][9]; // 表示每轮在自己格子上繁殖的细菌数量
    int Spread[9][9];  //表示每轮向周围传播的细菌数量
    int i,j; //两个通用迭代子
    int days, bacteria;
    memset(Breed, 0, sizeof(Breed)); //给数组初始化为 0 ；
    memset(Spread, 0, sizeof(Spread));
    printf("输入初始细菌数（小于31）和天数（小于5）\n");
    scanf("%d %d", &bacteria,  &days); 
    Breed[4][4] = bacteria; //在数组中心初始化细菌个数

    for (int d = 1; d<=days;d++) {
        for (i=0;i<9;i++){
            for (j=0;j<9;j++){
                if ( i!=8 && j!=8 ) {  
                    Spread[i-1][j-1] += Breed[i][j]; //（不能直接加给square会造成超限，应该先加给某个新增值，最后再将两个矩阵相加）
                    Spread[i-1][j] += Breed[i][j];
                    Spread[i-1][j+1] += Breed[i][j];
                    Spread[i][j-1] += Breed[i][j];
                    Spread[i][j+1] += Breed[i][j];
                    Spread[i+1][j-1] += Breed[i][j];
                    Spread[i+1][j] += Breed[i][j];
                    Spread[i+1][j+1] += Breed[i][j]; 
                    // 给格子的上下左右加上本体数量的offspring 
                    Breed[i][j] *= 2; //本体乘

                } //在边界上的格子不满足上下左右都有其他格子的条件，为防溢出要禁止。
            }
        }    

        for (i=0;i<9;i++){
            for (j=0;j<9;j++){
                Breed[i][j] += Spread[i][j];
            }
        }
        memset(Spread, 0, sizeof(Spread));
    }
    for (i=0;i<9;i++){
        for (j=0;j<9;j++){
            printf("%5d", Breed[i][j] );
            if (j<8) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}
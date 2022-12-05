// 輸入五個學生的姓名和成績，並輸出，然後輸出成績最低的學生姓名和成績。
// 要求：使用結構體。
#include<cstdio>
using namespace std;

struct Student {
    char name[20];
    int sub1; 
    int sub2;
    int sub3;
    int sub4;
    int sum;
} 
stu1, stu2,stu3,stu4,stu5;
struct Student stu[5] = {stu1, stu2, stu3, stu4, stu5};

int main () {
    int i, j, indice;
    for (i=0;i<5;i++){
        scanf("%s%d%d%d%d", stu[i].name, &stu[i].sub1, &stu[i].sub2, &stu[i].sub3, &stu[i].sub4 );
        stu[i].sum = stu[i].sub1 + stu[i].sub2 + stu[i].sub3 + stu[i].sub4 ;
    }
    for (i=0;i<5;i++){
        printf("%s %d\n", stu[i].name, stu[i].sum);
    }
    j = stu[1].sum;
    char best[20];

    for (i=0;i<5;i++){
        if (stu[i].sum <= j){
            indice = i;
            j = stu[i].sum;
        }
    }
    printf("%s %d\n", stu[indice].name, stu[indice].sum);
    return 0;
}
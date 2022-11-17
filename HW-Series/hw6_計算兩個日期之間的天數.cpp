#include <iostream>
using namespace std;
int Leaps(int year);
int days1(int year,int month,int day);
int Dayue[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int Xiaoyue[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main (){
    int y1,y2,m1,m2,d1,d2;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    cout << abs(days1(y2,m2,d2)-days1(y1,m1,d1)) << endl;
    return 0;
}

int days1(int y,int m, int d){
    int days = 0;
    days += ( 365*(y-Leaps(y)) + 366*Leaps(y) ); // 計算本年之前的年份

    if ((y % 4 ==0 && y % 100 == 0 && y % 400 == 0) || (y % 4 ==0 && y %100 != 0)){
        for (int i=0;i<m;i++){
            days+=Dayue[i];
        }
    }
    else {
        for (int i=0;i<m;i++){
            days+=Xiaoyue[i];
        }
    }
    days += d;
    return days;
}

int Leaps(int y){
    int run=0;
    for (int i=0; i<y; i++){ // 如果公元元年是0年就從0開始。
        if ((i % 4 ==0 && i % 100 == 0 && i % 400 == 0) || (i % 4 ==0 && i %100 != 0)) run++;
    }
    return run;
}
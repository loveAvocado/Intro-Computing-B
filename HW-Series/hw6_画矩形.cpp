#include <iostream>
#include <cstdio>
using namespace std;
void Draw(int height,int width,char icon,int hollow);
// 輸入長、寬、填充圖案（ASCII）和是否空心（空心爲0，實心爲1）輸出矩形。連續輸入連續輸出，輸入0時終止程式。
int a,b,d;
char c;

int main () {
    cin >> a >> b >> c >> d;
    while (a!=0){ 
        Draw(a,b,c,d);
        cin >> a >> b >> c >>d;
    }
    return 0;
}

void Draw(int height, int width, char icon, int hollow){  
    int i,j;
    if (hollow==1){
        for (i=0;i<height;i++){ 
            for (j=0;j<width;j++){
                cout << icon;
            }
            cout <<endl;
        }
    }
    if (hollow==0){
        for (i=0;i<height;i++){
            for (j=0;j<width;j++){
                if (i==0 || i == height -1) cout << icon;
                else if (j==0 ||  j== width-1) cout << icon;
                else cout <<" ";
            }
            cout <<endl;
        }
    }
}
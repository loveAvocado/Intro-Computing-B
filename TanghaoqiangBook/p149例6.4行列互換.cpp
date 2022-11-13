#include <iostream>
#include <cstdio>
using namespace std;

void SWAP(int m, int n){  
    int a[m][n];
    int b[n][m];
    int i,j;
    cout <<"輸入第一個矩陣:"<< endl;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];
        }
    }
    cout <<"輸出行列互換後的矩陣："<<endl;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d ",b[i][j]);
        }
        cout << endl;
    } 
}

int main () {
    int m,n;
    cout <<"輸入行和列"<<endl;
    cin >> m;
    cin >> n;
    SWAP(m,n);
    return 0;
} 
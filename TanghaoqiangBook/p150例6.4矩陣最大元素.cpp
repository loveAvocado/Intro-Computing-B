#include <cstdio>
#include <iostream>
using namespace std;

int BiggestOne(int m, int n){
	int i,j,row,col;
	int a[m][n]; 
    
	cout << "输入矩阵数据："<<endl;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}

	int max = a[0][0];
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (a[i][j] > max) {
				max = a[i][j];
				row = i;  //记录行号
				col = j;  //记录列号
			}
		}
	}
	cout <<"The biggest element is "<< max <<" whose coordinate is "<<"("<<row<<","<<col<<")."<<endl;
	return 0;
}

int main () {
	int m, n;
	cout <<"输入行数和列数："<<endl;
	cin >> m; 
	cin >> n;
	BiggestOne(m,n);
	return 0;
}
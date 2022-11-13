#include<iostream>
using namespace std;
int factorial(unsigned int);

int main (){
	int n;
	cin >> n;
	cout <<n<<"! = "<<factorial(n) << endl;
	return 0;
}

int factorial(unsigned int n){
	if (n <= 1) return n;
	else n *= factorial(n-1);
	return n;
}
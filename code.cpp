// Fibonacci series using golden ratio
#include <iostream>
#include <cmath>

using namespace std;

double goldenratio (int n=100){
	double x = 1;
	while (n >=0){
		x = 1 + 1/x;
		n--;
	}
	return x;
}

double fibonacci (int n) {
	double a = pow(goldenratio(100), n+1) - pow(1-goldenratio(100), n+1);
	double b = 2*goldenratio(100) - 1;
	return a/b;
}

int main(){
	cout << "Golden Rtio and Fibonacci Series Generator" << endl << endl;
	cout << "The golden ratio is: " << goldenratio(100) << endl;
	cout << "Fibonacci series: " << endl;
	for(int i=0 ; i <= 11 ; i++){
		cout << fibonacci(i) << endl;
	}
}

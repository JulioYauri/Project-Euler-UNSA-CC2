#include<iostream>

using namespace std;

int main(){
	unsigned long long aux = 1, fib = 2, suma = 0, x;
	while(fib < 4e6){
		if(fib % 2 == 0){
			suma += fib;
		}
		x = aux;
		aux = fib;
		fib += x;	
	}
	cout << suma << "\n";
}

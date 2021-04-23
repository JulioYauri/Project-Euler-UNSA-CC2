#include<iostream>
#include<math.h>
using namespace std;

bool esPrimo(long long n){
	for(long long i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	long long x = 600851475143;
	while(!esPrimo(x)){
		for(long long i = 2; i * i <= x; i++){
			if(x % i == 0 && esPrimo(i)){
				x /= i;
				break;
			}
		}
	}	
	cout << x << endl;
}


#include<iostream>
#define ll long long
using namespace std;

bool esPrimo(ll n){
	for(ll i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	ll i = 0, res, n = 2;
	while(i < 10001){
		if(esPrimo(n)){
			i++;
		}
		n++;
	}
	cout << n - 1<< endl;
}

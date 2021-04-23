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
	ll suma = 2;
	for(ll i = 3; i < 2e6; i+=2){
		if(esPrimo(i)){
			suma += i;
		}				
	}
	cout << suma << "\n";
}


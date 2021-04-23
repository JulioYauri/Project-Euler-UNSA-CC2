#include<iostream>
#define ll long long
using namespace std;

ll primerDiv(ll n){
	for(int i = 2; i * i<= n; i++){
		if(n % i == 0)return i;
	}
	return n;
}

ll numDiv(ll n){
	ll cnt = 1, aux, exp;
	while(n > 1){
		exp = 0;
		aux = primerDiv(n);
		while(n % aux == 0 && n > 1){
			exp++;
			n /= aux;
		}
		cnt *= exp + 1;
	}
	return cnt;
}

int main(){
	ll x = 1;
	while(numDiv(x * (x+1) / 2) <= 500){
		x++;
	}
	cout << x * (x+1) /2<< "\n";
}

#include<iostream>
#define ll long long

using namespace std;

ll collatz(ll n){
	ll aux = n, cnt = 0;
	while(n > 1){
		if(n % 2){
			n = 3 * n + 1;
		}else{
			n /= 2;
		}
		cnt++;
	}
	return cnt + 1;
}

int main(){
	ll mx = 1, imax, aux;
	for(ll i = 1; i < 1e6; i++){
		aux = collatz(i);
		if(aux >= mx){
			mx = aux;
			imax = i;
		}		
	}
	cout << imax << "\n";
}

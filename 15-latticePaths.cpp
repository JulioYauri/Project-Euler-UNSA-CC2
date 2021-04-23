#include<iostream>
#define ll long long
using namespace std;

ll comb(ll a, ll b){
	ll res = 1, aux = a;
	for(ll i = 1; i <= b; i++){
		res *= aux;
		res /= i;
		aux--;
	}
	return res;
}

int main(){
	cout << comb(40, 20) << "\n";
}

#include<iostream>
#define ll long long
using namespace std;

ll mcm(ll a, ll b){
	ll mx = max(a, b), mn = min(a, b), aux;
	while(mx % mn != 0){
		aux = mx % mn;
		mx = mn;
		mn = aux;
	}
	return a * b / mn;
}

int main(){
	ll res = 20, x = 20;
	for(ll i = x; i > 0; i--){
		if(res % i != 0){
			res = mcm(res, i);
		}
	}
	cout << res << "\n";
}

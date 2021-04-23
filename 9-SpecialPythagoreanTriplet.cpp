#include<iostream>
#define ll long long

using namespace std;

int main(){
	ll n = 1, ra, rb, rc;
	for(ll c = 415; c < 1000; c++){
		for(ll a = 1; a < 1000 - c; a++){
			if((1000 - a - c) * (1000 - a - c) + a * a == c * c){
				n = a * (1000 - a - c) * c;
			}
		}
	}
	cout << n << "\n";
}

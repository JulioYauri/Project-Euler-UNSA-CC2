#include<iostream>
#define ll long long
using namespace std;

ll f(ll n){
	return n * (n + 1) * (3 * n * n - n - 2) / 12;
}

int main(){
	cout << f(100) << endl;
}

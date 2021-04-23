#include<iostream>

using namespace std;

int sumaMultiplos(int n){
	int res = 0;
	for(int i = 1; i < n; i++){
		if(i % 3 == 0 || i % 5 == 0) res += i;
	}
	return res;
}

int main(){
	cout << sumaMultiplos(1000) << "\n";
}

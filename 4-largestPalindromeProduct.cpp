#include<iostream>
#include<math.h>
using namespace std;

float palindromo(int n){
	int aux = 0;
	aux += 100 * (n % 10);
	aux += ((n % 100) / 10) * 10;
	aux += n / 100;
	return n * 1000 + aux;
}

bool tresCifras(float n){
	return n > 99 && n < 1000;
}

int main(){
	float mx = 999, pal;
	while(true){
		pal = palindromo(mx);
		float divisor1 = 999;
		bool cond = false;
		while(ceil(pal/divisor1) != (int)(pal/divisor1) && divisor1 > 100 && (pal/divisor1) > 100){
			divisor1--;
			if(ceil(pal/divisor1) == (int)(pal/divisor1) && pal/divisor1 < 1000){
				cond = true;
				break;
			}
		}
	
		if(cond){
			cout << pal << " " << divisor1 << "\n";
			return 0;
		}
		mx--;
	}
}

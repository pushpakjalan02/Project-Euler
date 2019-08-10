#include<iostream>

using namespace std;

int gcd(int m, int n){
	while(m % n != 0){
		int r = m % n;
		m = n;
		n = r;
	}
	return n;
}

int main(){
	int lcm = 1;
	for(int i = 2; i < 20; i++){
		int g_c_d = gcd(lcm, i);
		lcm = (lcm * i) / g_c_d;
	}
	cout << "Answer is: " << lcm;
}
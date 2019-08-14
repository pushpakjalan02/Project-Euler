#include<iostream>

using namespace std;

int isPrime(int *prime, int no, int count){
	for(int i = 0; i < count; i++){
		if(!(no % prime[i])){
			return 0;
		}
	}
	return 1;
}

int main(int argc, char* argv[]){
	int m = 10001;
	int* prime = new int[m];
	prime[10001 - m] = 2;
	m--;
	int no = 3;
	while(m > 0){
		if(isPrime(prime, no, 10001 - m)){
			prime[10001 - m] = no;
			m--;
		}
		no += 2;	
	}
	cout << "10001st Prime is: " << prime[10000];
}